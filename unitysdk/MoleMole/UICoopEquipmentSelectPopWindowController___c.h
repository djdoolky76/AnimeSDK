#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EBC440)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBC480)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_0_OFFSET UNITYSDK_OFFSET(0x16EBC490)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_2_OFFSET UNITYSDK_OFFSET(0x16EBC5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex = 53959;

	class UICoopEquipmentSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4D940);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__50_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4D948);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopEquipmentSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4D950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__50_0(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_0_OFFSET))(this, filter);
		}

		::System::String* _InitSort_b__50_2(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__INITSORT_B__50_2_OFFSET))(this, filter);
		}
	};
}
