#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetActivityTelevisionBuffInfo; }

#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA92BD0)
#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA92C40)
#define RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA92B40)

namespace RPG::GameCore
{
	class SetActivityTelevisionBuffInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BuffID; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIVITYTELEVISIONBUFFINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
