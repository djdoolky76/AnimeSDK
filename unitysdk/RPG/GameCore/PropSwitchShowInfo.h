#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSwitchShowInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSWITCHSHOWINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D959D50)
#define RPG_GAMECORE_PROPSWITCHSHOWINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D959D70)
#define RPG_GAMECORE_PROPSWITCHSHOWINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D959D00)

namespace RPG::GameCore
{
	class PropSwitchShowInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupPropID; // 0x24
		::System::Boolean TargetIsOwner; // 0x28
		::System::Boolean IsHorizontalAnim; // 0x29
		::System::Boolean IsAuto; // 0x2A
		::System::Byte _padding0[0x1];
		::System::UInt32 SetTexture; // 0x2C
		::System::Boolean UseProgressAnim; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single Duration; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSwitchShowInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSwitchShowInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSwitchShowInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSwitchShowInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
