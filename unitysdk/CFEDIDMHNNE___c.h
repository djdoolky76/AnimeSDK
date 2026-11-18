#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CFEDIDMHNNE___C_ADKCHGEBACA_OFFSET UNITYSDK_OFFSET(0x18DCC4D0)
#define CFEDIDMHNNE___C_AEMDEJMKHGP_OFFSET UNITYSDK_OFFSET(0x18DCC4E0)
#define CFEDIDMHNNE___C_BOCHMLHKOOL_OFFSET UNITYSDK_OFFSET(0x18DCBF00)
#define CFEDIDMHNNE___C_CGBNFNMGJBG_OFFSET UNITYSDK_OFFSET(0x18DCC0E0)
#define CFEDIDMHNNE___C_EGFOMCMINPL_OFFSET UNITYSDK_OFFSET(0x18DCC0A0)
#define CFEDIDMHNNE___C_POMEOGCAPMG_OFFSET UNITYSDK_OFFSET(0x18DCBEB0)
#define CFEDIDMHNNE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DCBE60)
#define CFEDIDMHNNE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCBEA0)

inline static constexpr unsigned int CFEDIDMHNNE___c_TypeDefinitionIndex = 75479;

class CFEDIDMHNNE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__6_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5B8);
	}
	static ::System::Func_1<::UnityEngine::Events::UnityAction*>** StaticGet___9__6_4()
	{
		return (::System::Func_1<::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5C0);
	}
	static ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback** StaticGet___9__6_2()
	{
		return (::MoleMole::UIGeneralToggleWidgetController_OnClickCallback**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5C8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5D0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5D8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CFEDIDMHNNE___c_TypeDefinitionIndex)->GetStaticField(0x3A5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* POMEOGCAPMG()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_POMEOGCAPMG_OFFSET))(this);
	}

	::System::Boolean BOCHMLHKOOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_BOCHMLHKOOL_OFFSET))(this);
	}

	::System::String* EGFOMCMINPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_EGFOMCMINPL_OFFSET))(this);
	}

	::System::Void CGBNFNMGJBG(::System::Boolean CMBKOECNKKG, ::System::Boolean IAOJECCOMPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_CGBNFNMGJBG_OFFSET))(this, CMBKOECNKKG, IAOJECCOMPN);
	}

	::System::Boolean ADKCHGEBACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_ADKCHGEBACA_OFFSET))(this);
	}

	::System::Boolean AEMDEJMKHGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE___C_AEMDEJMKHGP_OFFSET))(this);
	}
};
