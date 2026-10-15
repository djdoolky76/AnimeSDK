#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleStageCellConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4EA60)
#define RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4E8B0)

namespace RPG::GameCore
{
	class RtBattleStageCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::IVec2 Pos; // 0x10
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::System::Int32 Order; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleStageCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleStageCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGECELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
