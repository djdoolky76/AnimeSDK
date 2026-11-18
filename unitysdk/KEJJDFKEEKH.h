#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEJJDFKEEKH_AKBCHBAGJGA_OFFSET UNITYSDK_OFFSET(0x7AB630)
#define KEJJDFKEEKH_AMHGLDAAOIJ_OFFSET UNITYSDK_OFFSET(0x7AB5C0)
#define KEJJDFKEEKH_GLPEEAEKHKI_OFFSET UNITYSDK_OFFSET(0x7AB720)
#define KEJJDFKEEKH__CTOR_OFFSET UNITYSDK_OFFSET(0x7AB550)

inline static constexpr unsigned int KEJJDFKEEKH_TypeDefinitionIndex = 85818;

struct alignas(8) KEJJDFKEEKH
{
	::System::Collections::Generic::List_1<::EBDKCHECNEH>* JKMCDIDPLKK; // 0x10
	::System::Int32 FOHLIAIOPLG; // 0x18
	::System::Int32 BIEAMFFKJIP; // 0x1C
	::EBDKCHECNEH LIDHLCGKJNJ; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::EBDKCHECNEH>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EBDKCHECNEH>*))((::PBYTE)hIl2Cpp + KEJJDFKEEKH__CTOR_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void AMHGLDAAOIJ(::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEJJDFKEEKH_AMHGLDAAOIJ_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void AKBCHBAGJGA(::System::Int32 GHHLMOJFIEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEJJDFKEEKH_AKBCHBAGJGA_OFFSET))(this, GHHLMOJFIEE);
	}

	::System::Void GLPEEAEKHKI(::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEJJDFKEEKH_GLPEEAEKHKI_OFFSET))(this, OHOGDOMNHNK);
	}
};
