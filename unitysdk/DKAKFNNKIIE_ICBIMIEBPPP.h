#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKAKFNNKIIE_MALPEECPJIJ;
namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKAKFNNKIIE_ICBIMIEBPPP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x149B10D0)
#define DKAKFNNKIIE_ICBIMIEBPPP__CTOR_OFFSET UNITYSDK_OFFSET(0x149B10C0)

inline static constexpr unsigned int DKAKFNNKIIE_ICBIMIEBPPP_TypeDefinitionIndex = 43876;

class DKAKFNNKIIE_ICBIMIEBPPP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* NNJOMEFILCC; // 0x10
	::DKAKFNNKIIE_MALPEECPJIJ* FGBNBFHOKAA; // 0x18
	::System::UInt32 MGMDLMBEDJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_ICBIMIEBPPP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::HollowEntityConfig* DAHEKJCEBEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_ICBIMIEBPPP_OKKMJKOAIKG_OFFSET))(this, DAHEKJCEBEA);
	}
};
