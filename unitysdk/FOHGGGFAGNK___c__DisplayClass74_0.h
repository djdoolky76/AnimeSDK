#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define FOHGGGFAGNK___C__DISPLAYCLASS74_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158F1CE0)
#define FOHGGGFAGNK___C__DISPLAYCLASS74_0___REFRESHACTORSTATES_B__0_OFFSET UNITYSDK_OFFSET(0x158F1DF0)

	class FOHGGGFAGNK___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* actor; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___C__DISPLAYCLASS74_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshActorStates_b__0(::FOACJPEHDKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___C__DISPLAYCLASS74_0___REFRESHACTORSTATES_B__0_OFFSET))(this, a1);
		}

	};
