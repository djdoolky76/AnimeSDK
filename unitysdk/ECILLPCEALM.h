#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELHFNPIPAGP.h"
#include "unitysdk/ELNECDIHJFA.h"

class KGBFLHNJHHN;

#define ECILLPCEALM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AA4110)
#define ECILLPCEALM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA4100)

inline static constexpr unsigned int ECILLPCEALM_TypeDefinitionIndex = 12297;

class ECILLPCEALM : public ::ELHFNPIPAGP
{
public:
	static ::System::Int32* StaticGet_KFKCFFJLFNH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ECILLPCEALM_TypeDefinitionIndex)->GetStaticField(0x3E40);
	}

	::System::Void _ctor(::ELNECDIHJFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ELNECDIHJFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECILLPCEALM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECILLPCEALM__CCTOR_OFFSET))();
	}
};
