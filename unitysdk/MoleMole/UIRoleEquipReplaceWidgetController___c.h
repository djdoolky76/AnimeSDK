#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHBOJCCMJBE;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14807FB0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14807FF0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__127_0_OFFSET UNITYSDK_OFFSET(0x14808000)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__140_0_OFFSET UNITYSDK_OFFSET(0x148080C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex = 40817;

	class UIRoleEquipReplaceWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__127_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C530);
		}
		static ::System::Func_2<::BHBOJCCMJBE*, ::System::Boolean>** StaticGet___9__140_0()
		{
			return (::System::Func_2<::BHBOJCCMJBE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C538);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleEquipReplaceWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__127_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__ONCLICKBACKBTN_B__127_0_OFFSET))(this);
		}

		::System::Boolean _RefreshResetBtn_b__140_0(::BHBOJCCMJBE* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHBOJCCMJBE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__REFRESHRESETBTN_B__140_0_OFFSET))(this, equip);
		}
	};
}
