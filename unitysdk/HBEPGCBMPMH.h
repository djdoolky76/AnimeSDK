#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

namespace MoleMole::Battle { class Entity; }

#define HBEPGCBMPMH_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x13E0AB60)
#define HBEPGCBMPMH__CTOR_OFFSET UNITYSDK_OFFSET(0x13E0AAB0)

inline static constexpr unsigned int HBEPGCBMPMH_TypeDefinitionIndex = 86380;

class HBEPGCBMPMH : public ::ENHHCBBAADE
{
public:
	::Foundation::Unreal::FGameplayTagContainer LFNJKLCBNPG; // 0x20

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagContainer& JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + HBEPGCBMPMH__CTOR_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + HBEPGCBMPMH_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
