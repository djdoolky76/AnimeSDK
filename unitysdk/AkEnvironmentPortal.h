#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkEnvironment;
namespace UnityEngine { class BoxCollider; }

#define AKENVIRONMENTPORTAL_B419579A301DA684_OFFSET UNITYSDK_OFFSET(0x2916410)
#define AKENVIRONMENTPORTAL_F37825376097BCD0_OFFSET UNITYSDK_OFFSET(0x2916830)
#define AKENVIRONMENTPORTAL_FAA682483FF716FF_OFFSET UNITYSDK_OFFSET(0x29168C0)
#define AKENVIRONMENTPORTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x29167A0)

inline static constexpr unsigned int AkEnvironmentPortal_TypeDefinitionIndex = 20454;

class AkEnvironmentPortal : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 axis; // 0x20
	::System::Byte _padding0[0x4];
	::Il2CppArray<::AkEnvironment*>* environments; // 0x30
	::UnityEngine::BoxCollider* AD92880FD74CF400; // 0x38

	::System::Boolean FAA682483FF716FF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_FAA682483FF716FF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL__CTOR_OFFSET))(this);
	}

	::UnityEngine::BoxCollider* F37825376097BCD0()
	{
		return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_F37825376097BCD0_OFFSET))(this);
	}

	::System::Single B419579A301DA684(::UnityEngine::Vector3 A68F97A4C15C5B02, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + AKENVIRONMENTPORTAL_B419579A301DA684_OFFSET))(this, A68F97A4C15C5B02, B48C66E5FB2449C6);
	}
};
