#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FEIKPIKAJEC.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEAECEINKCC_CKELJHNOAIE_HHNDCOAEBIJ_OFFSET UNITYSDK_OFFSET(0x14A05700)
#define HEAECEINKCC_CKELJHNOAIE_KGIPHPEBOIA_OFFSET UNITYSDK_OFFSET(0x14A056E0)
#define HEAECEINKCC_CKELJHNOAIE_MAOINMLEBBA_OFFSET UNITYSDK_OFFSET(0x14A056F0)
#define HEAECEINKCC_CKELJHNOAIE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A056D0)

inline static constexpr unsigned int HEAECEINKCC_CKELJHNOAIE_TypeDefinitionIndex = 64561;

class HEAECEINKCC_CKELJHNOAIE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Double>* BDAJIGIOAMM; // 0x10
	::System::Boolean MJLGHGFCHOM; // 0x18
	::System::Byte _padding0[0x7];
	::System::Double CIIPCCLOHLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CKELJHNOAIE__CTOR_OFFSET))(this);
	}

	::System::Void KGIPHPEBOIA(::FEIKPIKAJEC HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::FEIKPIKAJEC))((::PBYTE)hIl2Cpp + HEAECEINKCC_CKELJHNOAIE_KGIPHPEBOIA_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean MAOINMLEBBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CKELJHNOAIE_MAOINMLEBBA_OFFSET))(this);
	}

	::System::Void HHNDCOAEBIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CKELJHNOAIE_HHNDCOAEBIJ_OFFSET))(this);
	}
};
