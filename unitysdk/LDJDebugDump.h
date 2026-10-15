#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }

#define LDJDEBUGDUMP_CDAPDFCBGPJ_OFFSET UNITYSDK_OFFSET(0xB6253A0)
#define LDJDEBUGDUMP_CNPNNPNKNJD_OFFSET UNITYSDK_OFFSET(0xB624DA0)
#define LDJDEBUGDUMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6259C0)
#define LDJDEBUGDUMP_IPJNCOGEDKI_OFFSET UNITYSDK_OFFSET(0xB6250D0)
#define LDJDEBUGDUMP_KIBEMEIJBLO_OFFSET UNITYSDK_OFFSET(0xB625010)

inline static constexpr unsigned int LDJDebugDump_TypeDefinitionIndex = 47590;

	class LDJDebugDump : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_CTOR_OFFSET))(this);
		}

		::System::Void CNPNNPNKNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_CNPNNPNKNJD_OFFSET))(this);
		}

		::System::Boolean KIBEMEIJBLO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_KIBEMEIJBLO_OFFSET))(this, a1);
		}

		::System::String* IPJNCOGEDKI(::UnityEngine::Vector4 a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_IPJNCOGEDKI_OFFSET))(this, a1);
		}

		::System::Void CDAPDFCBGPJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_CDAPDFCBGPJ_OFFSET))(this, a1);
		}

	};
