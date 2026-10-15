#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyAddBathBuff; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFFD30)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFFD40)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFFD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyAddBathBuff_TypeDefinitionIndex = 22360;

	class TrainPartyAddBathBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
