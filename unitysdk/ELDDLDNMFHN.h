#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAFGMPKAFA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ELDDLDNMFHN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x76CE00)
#define ELDDLDNMFHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x158B99B0)

inline static constexpr unsigned int ELDDLDNMFHN_TypeDefinitionIndex = 76837;

struct alignas(4) ELDDLDNMFHN
{
	static ::ELDDLDNMFHN* StaticGet_FDJHEBHLJLD()
	{
		return (::ELDDLDNMFHN*)Il2CppClass::FromTypeDefinitionIndex(ELDDLDNMFHN_TypeDefinitionIndex)->GetStaticField(0x31790);
	}
	::System::Int32 OCDIEGIGHAC; // 0x10
	::System::Byte _padding0[0x4];
	::AGAFGMPKAFA MKDNHCCABOI; // 0x18
	::UnityEngine::Vector3 PFAMBJAPACH; // 0x78
	::UnityEngine::Vector3 IDMBPLJIBJC; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDDLDNMFHN__CCTOR_OFFSET))();
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDDLDNMFHN_JDAPDDEOCEA_OFFSET))(this);
	}
};
