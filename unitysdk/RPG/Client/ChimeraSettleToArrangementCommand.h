#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

#define RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xD4BD560)
#define RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xD4C0660)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToArrangementCommand_TypeDefinitionIndex = 64898;

	class ChimeraSettleToArrangementCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _ARRANGEMENT_PUZZLE_CUSTOM_STRING; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND_CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

	};
}
