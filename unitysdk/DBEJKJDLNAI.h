#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFDAKHPHDFE.h"
#include "unitysdk/POABMLIJKCF.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBEJKJDLNAI_CNJCNJGHKPB_OFFSET UNITYSDK_OFFSET(0x19C00B90)
#define DBEJKJDLNAI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19C00B20)
#define DBEJKJDLNAI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00A70)

inline static constexpr unsigned int DBEJKJDLNAI_TypeDefinitionIndex = 9464;

class DBEJKJDLNAI : public ::HFDAKHPHDFE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HFMIKBLLFNJ; // 0xC8

	::System::Void _ctor(::POABMLIJKCF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POABMLIJKCF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBEJKJDLNAI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEJKJDLNAI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void CNJCNJGHKPB(::System::String* PCBPFADLJGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBEJKJDLNAI_CNJCNJGHKPB_OFFSET))(this, PCBPFADLJGK);
	}
};
