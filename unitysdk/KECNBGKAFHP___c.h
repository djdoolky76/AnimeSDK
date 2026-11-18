#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class ADJHBNPPGEE_1;

#define KECNBGKAFHP___C_OBIPGANOHNL_OFFSET UNITYSDK_OFFSET(0x157E1FE0)
#define KECNBGKAFHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157E1F90)
#define KECNBGKAFHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157E1FD0)

inline static constexpr unsigned int KECNBGKAFHP___c_TypeDefinitionIndex = 65121;

class KECNBGKAFHP___c : public ::System::Object
{
public:
	static ::System::Action_1<::ADJHBNPPGEE_1<::System::Object*>*>** StaticGet___9__74_0()
	{
		return (::System::Action_1<::ADJHBNPPGEE_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(KECNBGKAFHP___c_TypeDefinitionIndex)->GetStaticField(0x44550);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KECNBGKAFHP___c_TypeDefinitionIndex)->GetStaticField(0x44558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECNBGKAFHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP___C__CTOR_OFFSET))(this);
	}

	::System::Void OBIPGANOHNL(::ADJHBNPPGEE_1<::System::Object*>* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::ADJHBNPPGEE_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KECNBGKAFHP___C_OBIPGANOHNL_OFFSET))(this, IPMMCGDMODG);
	}
};
