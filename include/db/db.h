#ifndef DB_CONNECTOR_H
#define DB_CONNECTOR_H

#include <string>

class Db {
public:
    /**
     * @brief 执行命令
     */
    virtual void execute(const std::string&) = 0;

    /**
     * @brief Get the Reply object
     *
     * @return const std::string
     */
    virtual const std::string getReply() = 0;

    virtual ~Db() = default;
};

#endif  // DB_CONNECTOR_H