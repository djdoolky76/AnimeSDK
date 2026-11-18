#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCNMEKIJPOA.h"
#include "unitysdk/BOEOIIMNDBK.h"

class FOLOGHLENFB;
class KGBFLHNJHHN;

#define AGHDHOIPHFI_HALEKBBECOP_OFFSET UNITYSDK_OFFSET(0x15770F10)
#define AGHDHOIPHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15770F00)

inline static constexpr unsigned int AGHDHOIPHFI_TypeDefinitionIndex = 12499;

class AGHDHOIPHFI : public ::NCNMEKIJPOA
{
public:
	::Il2CppArray<::FOLOGHLENFB*>* IBGBFBCJGMK; // 0x58

	::System::Void _ctor(::BOEOIIMNDBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOEOIIMNDBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AGHDHOIPHFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::Il2CppArray<::FOLOGHLENFB*>* HALEKBBECOP()
	{
		return ((::Il2CppArray<::FOLOGHLENFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHDHOIPHFI_HALEKBBECOP_OFFSET))(this);
	}
};
