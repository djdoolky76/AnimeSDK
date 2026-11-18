#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANABALCPFEH.h"
#include "unitysdk/JLHKOGGGJEH.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MAMBLBDIION_FFFNHAPNICI_OFFSET UNITYSDK_OFFSET(0x19DAED20)
#define MAMBLBDIION__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAED10)

inline static constexpr unsigned int MAMBLBDIION_TypeDefinitionIndex = 11040;

class MAMBLBDIION : public ::ANABALCPFEH
{
public:
	::System::String* _PGLBANMBLCA_k__BackingField; // 0x60

	::System::Void _ctor(::JLHKOGGGJEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JLHKOGGGJEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAMBLBDIION__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFFNHAPNICI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMBLBDIION_FFFNHAPNICI_OFFSET))(this);
	}
};
