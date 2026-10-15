#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class OpenFiveDimWindowStagePage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E14D0)
#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E14E0)
#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E14A0)

namespace RPG::GameCore
{
	class OpenFiveDimWindowStagePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::DynamicString* EntityID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFiveDimWindowStagePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFiveDimWindowStagePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
