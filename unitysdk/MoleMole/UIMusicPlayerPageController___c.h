#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CAE610)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CAE650)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONMAINBTNCLICKHANDLE_B__57_0_OFFSET UNITYSDK_OFFSET(0x14CAE6A0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONUIOPEN_B__45_0_OFFSET UNITYSDK_OFFSET(0x14CAE660)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicPlayerPageController___c_TypeDefinitionIndex = 53060;

	class UIMusicPlayerPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F210);
		}
		static ::System::Action** StaticGet___9__57_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F218);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__45_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMusicPlayerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__45_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONUIOPEN_B__45_0_OFFSET))(this, x);
		}

		::System::Void _OnMainBtnClickHandle_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___C__ONMAINBTNCLICKHANDLE_B__57_0_OFFSET))(this);
		}
	};
}
