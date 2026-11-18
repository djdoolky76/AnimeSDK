#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLAGJHKADAN;
class IBENDELLLAO;
namespace MoleMole { class UICoopLevelRewardRowWidgetController_Context; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Func_1; }

#define IICDJPFNMDC___C_EBHICJCJPAI_OFFSET UNITYSDK_OFFSET(0x101489C0)
#define IICDJPFNMDC___C_FJEDLKMKKKO_OFFSET UNITYSDK_OFFSET(0x101489B0)
#define IICDJPFNMDC___C_MKFNFGEFFJM_OFFSET UNITYSDK_OFFSET(0x101489A0)
#define IICDJPFNMDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10148950)
#define IICDJPFNMDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10148990)

inline static constexpr unsigned int IICDJPFNMDC___c_TypeDefinitionIndex = 92148;

class IICDJPFNMDC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IICDJPFNMDC___c_TypeDefinitionIndex)->GetStaticField(0x3B310);
	}
	static ::System::Converter_2<::GLAGJHKADAN*, ::System::Object*>** StaticGet___9__18_0()
	{
		return (::System::Converter_2<::GLAGJHKADAN*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IICDJPFNMDC___c_TypeDefinitionIndex)->GetStaticField(0x3B318);
	}
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IICDJPFNMDC___c_TypeDefinitionIndex)->GetStaticField(0x3B320);
	}
	static ::System::Func_1<::IBENDELLLAO*>** StaticGet___9__11_1()
	{
		return (::System::Func_1<::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(IICDJPFNMDC___c_TypeDefinitionIndex)->GetStaticField(0x3B328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IICDJPFNMDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC___C__CTOR_OFFSET))(this);
	}

	::System::Void MKFNFGEFFJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC___C_MKFNFGEFFJM_OFFSET))(this);
	}

	::IBENDELLLAO* FJEDLKMKKKO()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC___C_FJEDLKMKKKO_OFFSET))(this);
	}

	::MoleMole::UICoopLevelRewardRowWidgetController_Context* EBHICJCJPAI(::GLAGJHKADAN* HAAEBCOBKFF)
	{
		return ((::MoleMole::UICoopLevelRewardRowWidgetController_Context*(*)(::PVOID, ::GLAGJHKADAN*))((::PBYTE)hIl2Cpp + IICDJPFNMDC___C_EBHICJCJPAI_OFFSET))(this, HAAEBCOBKFF);
	}
};
