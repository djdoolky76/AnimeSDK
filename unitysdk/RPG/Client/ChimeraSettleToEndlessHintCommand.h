#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

#define RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xCB59270)
#define RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xCB5C3C0)

namespace RPG::Client
{
	class ChimeraSettleToEndlessHintCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _ENDLESS_HINT_STATE_MAIN_PUZLLE_CUSTOM_STRING; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND_CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOENDLESSHINTCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

	};
}
