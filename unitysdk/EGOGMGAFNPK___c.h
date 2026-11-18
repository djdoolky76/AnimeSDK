#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T> class Action_1; }

#define EGOGMGAFNPK___C_JNFIFMNIFPJ_OFFSET UNITYSDK_OFFSET(0x13548410)
#define EGOGMGAFNPK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135483C0)
#define EGOGMGAFNPK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13548400)

inline static constexpr unsigned int EGOGMGAFNPK___c_TypeDefinitionIndex = 85217;

class EGOGMGAFNPK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGOGMGAFNPK___c_TypeDefinitionIndex)->GetStaticField(0x31710);
	}
	static ::System::Action_1<::CJIEIHEDMME*>** StaticGet___9__35_0()
	{
		return (::System::Action_1<::CJIEIHEDMME*>**)Il2CppClass::FromTypeDefinitionIndex(EGOGMGAFNPK___c_TypeDefinitionIndex)->GetStaticField(0x31718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGOGMGAFNPK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOGMGAFNPK___C__CTOR_OFFSET))(this);
	}

	::System::Void JNFIFMNIFPJ(::CJIEIHEDMME* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + EGOGMGAFNPK___C_JNFIFMNIFPJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
