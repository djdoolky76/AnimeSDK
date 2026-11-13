#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEOMHPIPKE;
class LOHFIAOJHKN;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }

#define LOHFIAOJHKN___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B11C0)
#define LOHFIAOJHKN___C__DISPLAYCLASS5_0___ONADVENTUREPHASEENTERED_B__0_OFFSET UNITYSDK_OFFSET(0x1A5B2200)

inline static constexpr unsigned int LOHFIAOJHKN___c__DisplayClass5_0_TypeDefinitionIndex = 54093;

	class LOHFIAOJHKN___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::LOHFIAOJHKN* __4__this; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsPlanData* currentPlanData; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* currentPlanPhaseData; // 0x20
		::System::Int32 selectionIndex; // 0x28
		::System::UInt32 textJoinID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnAdventurePhaseEntered_b__0(::DOEOMHPIPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEOMHPIPKE*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN___C__DISPLAYCLASS5_0___ONADVENTUREPHASEENTERED_B__0_OFFSET))(this, a1);
		}

	};
