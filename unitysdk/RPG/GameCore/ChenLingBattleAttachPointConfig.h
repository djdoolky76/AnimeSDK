#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAttachPointConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554A00)
#define RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAttachPointConfig_TypeDefinitionIndex = 15713;

	class ChenLingBattleAttachPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPointName; // 0x10
		::RPG::MVector3 Offset; // 0x18
		::RPG::MVector3 Rotation; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAttachPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAttachPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEATTACHPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
