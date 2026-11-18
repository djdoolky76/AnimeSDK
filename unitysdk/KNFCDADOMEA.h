#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNFCDADOMEA_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x157FFC60)
#define KNFCDADOMEA_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x157FFDA0)
#define KNFCDADOMEA__CTOR_OFFSET UNITYSDK_OFFSET(0x157FFD30)

inline static constexpr unsigned int KNFCDADOMEA_TypeDefinitionIndex = 85831;

class KNFCDADOMEA : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OPKOHOOFJHM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCDADOMEA__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCDADOMEA_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCDADOMEA_KHJELIBOECB_OFFSET))(this);
	}
};
