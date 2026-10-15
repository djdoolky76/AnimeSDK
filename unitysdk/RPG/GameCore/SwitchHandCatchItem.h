#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandCatchItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDCATCHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41970)
#define RPG_GAMECORE_SWITCHHANDCATCHITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41980)
#define RPG_GAMECORE_SWITCHHANDCATCHITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41940)

namespace RPG::GameCore
{
	class SwitchHandCatchItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single WaitAnimTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
