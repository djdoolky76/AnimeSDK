#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHKBIMEMOCP;
class LAIJAAGMILC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A217A90)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A217AD0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A217BB0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A217AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex = 81027;

	class UIArcadeAchievementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::EHKBIMEMOCP*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::EHKBIMEMOCP*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E78);
		}
		static ::System::Func_2<::LAIJAAGMILC*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::LAIJAAGMILC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeAchievementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__7_0(::LAIJAAGMILC* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAIJAAGMILC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, id);
		}

		::System::Void _OnReceiveBtnClicked_b__9_0(::EHKBIMEMOCP* itemMap)
		{
			return ((::System::Void(*)(::PVOID, ::EHKBIMEMOCP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__ONRECEIVEBTNCLICKED_B__9_0_OFFSET))(this, itemMap);
		}
	};
}
