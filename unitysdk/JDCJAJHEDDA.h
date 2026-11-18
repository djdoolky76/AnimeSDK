#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONDCPFNGBHC.h"
#include "unitysdk/BGDKDJKKNIC.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDCJAJHEDDA_NLEFCHGPBIH_OFFSET UNITYSDK_OFFSET(0x18BC6C00)
#define JDCJAJHEDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6BF0)

inline static constexpr unsigned int JDCJAJHEDDA_TypeDefinitionIndex = 12532;

class JDCJAJHEDDA : public ::ONDCPFNGBHC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* IAOLHFFIMKH; // 0x58

	::System::Void _ctor(::BGDKDJKKNIC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGDKDJKKNIC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JDCJAJHEDDA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void NLEFCHGPBIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCJAJHEDDA_NLEFCHGPBIH_OFFSET))(this);
	}
};
