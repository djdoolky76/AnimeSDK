#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKAKFNNKIIE_EPGKKJGDOHC_MGKOBCGEKCD_OFFSET UNITYSDK_OFFSET(0x19415E00)
#define DKAKFNNKIIE_EPGKKJGDOHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19415DF0)

inline static constexpr unsigned int DKAKFNNKIIE_EPGKKJGDOHC_TypeDefinitionIndex = 43879;

class DKAKFNNKIIE_EPGKKJGDOHC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* NNJOMEFILCC; // 0x10
	::System::UInt32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_EPGKKJGDOHC__CTOR_OFFSET))(this);
	}

	::System::Void MGKOBCGEKCD(::MoleMole::HollowEntityConfig* DAHEKJCEBEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_EPGKKJGDOHC_MGKOBCGEKCD_OFFSET))(this, DAHEKJCEBEA);
	}
};
