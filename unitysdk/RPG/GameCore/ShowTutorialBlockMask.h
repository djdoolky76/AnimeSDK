#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialBlockMask; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6390)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE63A0)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE6350)

namespace RPG::GameCore
{
	class ShowTutorialBlockMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* NodeWhiteList; // 0x20
		::System::Single Scale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
