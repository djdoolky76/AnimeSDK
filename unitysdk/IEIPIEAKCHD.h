#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPOOFFAFI.h"

class OAHBEIDHNDF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEIPIEAKCHD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15BFFBC0)
#define IEIPIEAKCHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFFBB0)

inline static constexpr unsigned int IEIPIEAKCHD_TypeDefinitionIndex = 56929;

class IEIPIEAKCHD : public ::PBHPOOFFAFI
{
public:
	::System::Collections::Generic::List_1<::System::Char>* GBAJEJACKMH; // 0x28
	::System::Boolean PIGBNKHOBHM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPIEAKCHD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::OAHBEIDHNDF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAHBEIDHNDF*))((::PBYTE)hIl2Cpp + IEIPIEAKCHD_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB);
	}
};
