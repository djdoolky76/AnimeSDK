#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define ODBDNAFOMKJ___C_FIHPHKCJCME_OFFSET UNITYSDK_OFFSET(0xFB51C20)
#define ODBDNAFOMKJ___C_JCGGIEAPLIK_OFFSET UNITYSDK_OFFSET(0xFB51D30)
#define ODBDNAFOMKJ___C_KBFOFBJNPID_OFFSET UNITYSDK_OFFSET(0xFB51B00)
#define ODBDNAFOMKJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB51AB0)
#define ODBDNAFOMKJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB51AF0)

inline static constexpr unsigned int ODBDNAFOMKJ___c_TypeDefinitionIndex = 62271;

class ODBDNAFOMKJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__36_2()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ODBDNAFOMKJ___c_TypeDefinitionIndex)->GetStaticField(0x47770);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__36_1()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ODBDNAFOMKJ___c_TypeDefinitionIndex)->GetStaticField(0x47778);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ODBDNAFOMKJ___c_TypeDefinitionIndex)->GetStaticField(0x47780);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__36_3()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ODBDNAFOMKJ___c_TypeDefinitionIndex)->GetStaticField(0x47788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODBDNAFOMKJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ___C__CTOR_OFFSET))(this);
	}

	::System::Void KBFOFBJNPID(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ___C_KBFOFBJNPID_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void FIHPHKCJCME(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ___C_FIHPHKCJCME_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void JCGGIEAPLIK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ODBDNAFOMKJ___C_JCGGIEAPLIK_OFFSET))(this, KOIBHLHLMFC);
	}
};
