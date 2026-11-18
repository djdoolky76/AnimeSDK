#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOAKPAOMPC.h"
#include "unitysdk/NIHENEGMKJB.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEFGLDFPBIL_CJFOOBCHOAJ_OFFSET UNITYSDK_OFFSET(0x15A72F80)
#define FEFGLDFPBIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15A72EE0)

inline static constexpr unsigned int FEFGLDFPBIL_TypeDefinitionIndex = 17301;

class FEFGLDFPBIL : public ::HNOAKPAOMPC
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _JCFKGJGHDEM_k__BackingField; // 0x40

	::System::Void _ctor(::NIHENEGMKJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NIHENEGMKJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FEFGLDFPBIL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* CJFOOBCHOAJ()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGLDFPBIL_CJFOOBCHOAJ_OFFSET))(this);
	}
};
