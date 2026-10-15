#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define JBBAMLKCDKG___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16552530)
#define JBBAMLKCDKG___C__DISPLAYCLASS10_0___FINDACTOR_B__0_OFFSET UNITYSDK_OFFSET(0x16552540)

inline static constexpr unsigned int JBBAMLKCDKG___c__DisplayClass10_0_TypeDefinitionIndex = 79767;

	class JBBAMLKCDKG___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FOACJPEHDKO* path; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBAMLKCDKG___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindActor_b__0(::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG___C__DISPLAYCLASS10_0___FINDACTOR_B__0_OFFSET))(this, a1);
		}

	};
