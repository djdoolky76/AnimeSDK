#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCJJKHFBEBN.h"
#include "unitysdk/MKLOOABDHFA.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KNICNDJMCJE_HKFHGDMBLAK_OFFSET UNITYSDK_OFFSET(0x1955E710)
#define KNICNDJMCJE_IFFKJJHOMOK_OFFSET UNITYSDK_OFFSET(0x1955E700)
#define KNICNDJMCJE_MKFJDPFFOLB_OFFSET UNITYSDK_OFFSET(0x1955E720)
#define KNICNDJMCJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1955E6F0)

inline static constexpr unsigned int KNICNDJMCJE_TypeDefinitionIndex = 11593;

class KNICNDJMCJE : public ::CCJJKHFBEBN
{
public:
	::System::Void _ctor(::MKLOOABDHFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKLOOABDHFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KNICNDJMCJE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFFKJJHOMOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICNDJMCJE_IFFKJJHOMOK_OFFSET))(this);
	}

	::System::String* HKFHGDMBLAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICNDJMCJE_HKFHGDMBLAK_OFFSET))(this);
	}

	::System::String* MKFJDPFFOLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICNDJMCJE_MKFJDPFFOLB_OFFSET))(this);
	}
};
