#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
namespace System { template <typename T> class Action_1; }

#define CFIJCMGJBAB___C_OGLPFFKIKAP_OFFSET UNITYSDK_OFFSET(0x1454F180)
#define CFIJCMGJBAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1454F130)
#define CFIJCMGJBAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1454F170)

inline static constexpr unsigned int CFIJCMGJBAB___c_TypeDefinitionIndex = 61035;

class CFIJCMGJBAB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFIJCMGJBAB___c_TypeDefinitionIndex)->GetStaticField(0x4F2B0);
	}
	static ::System::Action_1<::GEIHCPAOKKK*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(CFIJCMGJBAB___c_TypeDefinitionIndex)->GetStaticField(0x4F2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIJCMGJBAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB___C__CTOR_OFFSET))(this);
	}

	::System::Void OGLPFFKIKAP(::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB___C_OGLPFFKIKAP_OFFSET))(this, PFDGHBCJCNP);
	}
};
