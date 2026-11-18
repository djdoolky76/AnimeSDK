#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMAGDPJGHJN.h"
#include "unitysdk/AGGGPBIOOIG.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DCOBGPBPCDK_DLFHCOAHDDC_OFFSET UNITYSDK_OFFSET(0x19507E30)
#define DCOBGPBPCDK__CTOR_OFFSET UNITYSDK_OFFSET(0x19507E20)

inline static constexpr unsigned int DCOBGPBPCDK_TypeDefinitionIndex = 9887;

class DCOBGPBPCDK : public ::JMAGDPJGHJN
{
public:
	::System::Void _ctor(::AGGGPBIOOIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AGGGPBIOOIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCOBGPBPCDK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DLFHCOAHDDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOBGPBPCDK_DLFHCOAHDDC_OFFSET))(this);
	}
};
