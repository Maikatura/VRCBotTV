#pragma once
#include "bot/Command.h"


class VRChatBoolCmd : public Command
{
public:
	VRChatBoolCmd(Bot* aBot, const std::string& aCommandName);
	bool HandleCommandLogic(Client& aClient, const PRIVMSG& priv, const std::string& aMessage) override;
};
