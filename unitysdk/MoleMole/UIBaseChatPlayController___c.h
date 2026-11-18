#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class IADDHANFKPG;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18064540)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18064580)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__RESTOREPLAYERACCESSORY_B__64_0_OFFSET UNITYSDK_OFFSET(0x180645E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__SETPLAYERACCESSORY_B__63_0_OFFSET UNITYSDK_OFFSET(0x18064590)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__SETPLAYERACCESSORY_B__63_1_OFFSET UNITYSDK_OFFSET(0x180645C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c_TypeDefinitionIndex = 85913;

	class UIBaseChatPlayController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::IADDHANFKPG*, ::System::Int32>** StaticGet___9__64_0()
		{
			return (::System::Converter_2<::IADDHANFKPG*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBaseChatPlayController___c_TypeDefinitionIndex)->GetStaticField(0x41FE0);
		}
		static ::System::Converter_2<::IADDHANFKPG*, ::System::Int32>** StaticGet___9__63_1()
		{
			return (::System::Converter_2<::IADDHANFKPG*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBaseChatPlayController___c_TypeDefinitionIndex)->GetStaticField(0x41FE8);
		}
		static ::System::Converter_2<::IADDHANFKPG*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__63_0()
		{
			return (::System::Converter_2<::IADDHANFKPG*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIBaseChatPlayController___c_TypeDefinitionIndex)->GetStaticField(0x41FF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBaseChatPlayController___c_TypeDefinitionIndex)->GetStaticField(0x41FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _SetPlayerAccessory_b__63_0(::IADDHANFKPG* x)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__SETPLAYERACCESSORY_B__63_0_OFFSET))(this, x);
		}

		::System::Int32 _SetPlayerAccessory_b__63_1(::IADDHANFKPG* x)
		{
			return ((::System::Int32(*)(::PVOID, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__SETPLAYERACCESSORY_B__63_1_OFFSET))(this, x);
		}

		::System::Int32 _RestorePlayerAccessory_b__64_0(::IADDHANFKPG* x)
		{
			return ((::System::Int32(*)(::PVOID, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__RESTOREPLAYERACCESSORY_B__64_0_OFFSET))(this, x);
		}
	};
}
