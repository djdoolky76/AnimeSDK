#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHCBIIMKLBK;
namespace MoleMole { class UISocialCircleJoinRowWidgetController_Data; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LGKJPKNDKJC___C_JIMJABKJNCP_OFFSET UNITYSDK_OFFSET(0x11F0C5A0)
#define LGKJPKNDKJC___C_KLFCDPDFKCA_OFFSET UNITYSDK_OFFSET(0x11F0C380)
#define LGKJPKNDKJC___C_LPAKBMELFNO_OFFSET UNITYSDK_OFFSET(0x11F0C1D0)
#define LGKJPKNDKJC___C_PPDDIFOHGIG_OFFSET UNITYSDK_OFFSET(0x11F0C3E0)
#define LGKJPKNDKJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F0C180)
#define LGKJPKNDKJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F0C1C0)

inline static constexpr unsigned int LGKJPKNDKJC___c_TypeDefinitionIndex = 50807;

class LGKJPKNDKJC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__12_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LGKJPKNDKJC___c_TypeDefinitionIndex)->GetStaticField(0x3E680);
	}
	static ::System::Func_2<::NHCBIIMKLBK*, ::System::Object*>** StaticGet___9__11_1()
	{
		return (::System::Func_2<::NHCBIIMKLBK*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LGKJPKNDKJC___c_TypeDefinitionIndex)->GetStaticField(0x3E688);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__12_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LGKJPKNDKJC___c_TypeDefinitionIndex)->GetStaticField(0x3E690);
	}
	static ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>** StaticGet___9__11_0()
	{
		return (::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LGKJPKNDKJC___c_TypeDefinitionIndex)->GetStaticField(0x3E698);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LGKJPKNDKJC___c_TypeDefinitionIndex)->GetStaticField(0x3E6A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C__CTOR_OFFSET))(this);
	}

	::System::String* LPAKBMELFNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C_LPAKBMELFNO_OFFSET))(this);
	}

	::MoleMole::UISocialCircleJoinRowWidgetController_Data* KLFCDPDFKCA(::NHCBIIMKLBK* LJBPECKCCEA)
	{
		return ((::MoleMole::UISocialCircleJoinRowWidgetController_Data*(*)(::PVOID, ::NHCBIIMKLBK*))((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C_KLFCDPDFKCA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* PPDDIFOHGIG()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C_PPDDIFOHGIG_OFFSET))(this);
	}

	::System::String* JIMJABKJNCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKJPKNDKJC___C_JIMJABKJNCP_OFFSET))(this);
	}
};
