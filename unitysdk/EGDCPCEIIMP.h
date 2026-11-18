#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGDCPCEIIMP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDDD550)
#define EGDCPCEIIMP__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDD540)

inline static constexpr unsigned int EGDCPCEIIMP_TypeDefinitionIndex = 41664;

class EGDCPCEIIMP : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>** StaticGet_OHBIKIOCCBO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(EGDCPCEIIMP_TypeDefinitionIndex)->GetStaticField(0x47DE0);
	}
	// static const ::System::String* BDOJPNKKJOO; // 0x0
	// static const ::System::String* DAHJJGLDLOE; // 0x0
	// static const ::System::Single BILEIEONIIO; // 0x0
	// static const ::System::Single APPIEJPKICF; // 0x0
	// static const ::System::Single INJLJBKGFPE; // 0x0
	// static const ::System::Single GPAPMKNDFKL; // 0x0
	// static const ::System::Single KGLFGOLOKHI; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDCPCEIIMP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDCPCEIIMP__CCTOR_OFFSET))();
	}
};
