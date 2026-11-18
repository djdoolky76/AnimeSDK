#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGLNACENBCN.h"
#include "unitysdk/OBCOOLNCLPF.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PPLMJIEIEAG_FFFNHAPNICI_OFFSET UNITYSDK_OFFSET(0x1C0B9F00)
#define PPLMJIEIEAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B9EF0)

inline static constexpr unsigned int PPLMJIEIEAG_TypeDefinitionIndex = 14570;

class PPLMJIEIEAG : public ::GGLNACENBCN
{
public:
	::System::String* _PGLBANMBLCA_k__BackingField; // 0x70

	::System::Void _ctor(::OBCOOLNCLPF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBCOOLNCLPF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PPLMJIEIEAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFFNHAPNICI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLMJIEIEAG_FFFNHAPNICI_OFFSET))(this);
	}
};
