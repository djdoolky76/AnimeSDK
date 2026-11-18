#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFGHOLFKEPK;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1992CF80)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1992CFC0)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0x1992CFD0)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET UNITYSDK_OFFSET(0x1992D180)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooDreamResultPageController___c_TypeDefinitionIndex = 72394;

	class UIBangBooDreamResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D910);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D918);
		}
		static ::System::Action_1<::NFGHOLFKEPK*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::NFGHOLFKEPK*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_1(::NFGHOLFKEPK* msg)
		{
			return ((::System::Void(*)(::PVOID, ::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET))(this, msg);
		}
	};
}
