#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define JOMECMCADAI___C_GHDCLBJLNPJ_OFFSET UNITYSDK_OFFSET(0x15B75600)
#define JOMECMCADAI___C_OJNCFDCONPK_OFFSET UNITYSDK_OFFSET(0x15B756D0)
#define JOMECMCADAI___C_PIKCNHCIANL_OFFSET UNITYSDK_OFFSET(0x15B75800)
#define JOMECMCADAI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B755B0)
#define JOMECMCADAI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B755F0)

inline static constexpr unsigned int JOMECMCADAI___c_TypeDefinitionIndex = 92950;

class JOMECMCADAI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOMECMCADAI___c_TypeDefinitionIndex)->GetStaticField(0x3E420);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__29_44()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JOMECMCADAI___c_TypeDefinitionIndex)->GetStaticField(0x3E428);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__29_26()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(JOMECMCADAI___c_TypeDefinitionIndex)->GetStaticField(0x3E430);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__29_43()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JOMECMCADAI___c_TypeDefinitionIndex)->GetStaticField(0x3E438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMECMCADAI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GHDCLBJLNPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI___C_GHDCLBJLNPJ_OFFSET))(this);
	}

	::System::Void OJNCFDCONPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMECMCADAI___C_OJNCFDCONPK_OFFSET))(this);
	}

	::System::Void PIKCNHCIANL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOMECMCADAI___C_PIKCNHCIANL_OFFSET))(this, EGEGIMGMJHN);
	}
};
