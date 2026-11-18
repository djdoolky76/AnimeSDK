#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEHLFEMNLND.h"
#include "unitysdk/DCGKHMABOCG.h"

class KGBFLHNJHHN;

#define AIEGLDMFMMF_JKFOGDAFION_OFFSET UNITYSDK_OFFSET(0x19F0DBA0)
#define AIEGLDMFMMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19F0DC40)
#define AIEGLDMFMMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F0DC30)
#define AIEGLDMFMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0DBB0)

inline static constexpr unsigned int AIEGLDMFMMF_TypeDefinitionIndex = 11272;

class AIEGLDMFMMF : public ::GEHLFEMNLND
{
public:
	static ::System::Int32* StaticGet_JHBEJMEGLNJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AIEGLDMFMMF_TypeDefinitionIndex)->GetStaticField(0x3E20);
	}
	::Il2CppArray<::System::Int32>* _GADIBNOADAE_k__BackingField; // 0xA8

	::System::Void _ctor(::DCGKHMABOCG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCGKHMABOCG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIEGLDMFMMF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIEGLDMFMMF__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Int32>* JKFOGDAFION()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGLDMFMMF_JKFOGDAFION_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGLDMFMMF_OJENCMOGDKL_OFFSET))(this);
	}
};
