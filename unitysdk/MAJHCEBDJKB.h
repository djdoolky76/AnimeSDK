#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/PropState.h"
namespace RPG::GameCore { class SwitchHandCatchableStateSync; }
namespace RPG::GameCore { class TaskContext; }

#define MAJHCEBDJKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB84FE00)
#define MAJHCEBDJKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB84FE10)
#define MAJHCEBDJKB_KELEJEHIPNJ_OFFSET UNITYSDK_OFFSET(0xB84FF50)
#define MAJHCEBDJKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84FEB0)
#define MAJHCEBDJKB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB84FF00)
#define MAJHCEBDJKB_TICK_OFFSET UNITYSDK_OFFSET(0xB84FE50)

	class MAJHCEBDJKB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::SwitchHandCatchableStateSync* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KELEJEHIPNJ(::RPG::GameCore::PropState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + MAJHCEBDJKB_KELEJEHIPNJ_OFFSET))(this, a1);
		}

	};
