#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KINMNJGBFLP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2D9A0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x13A2D9B0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__2_OFFSET UNITYSDK_OFFSET(0x13A2D9F0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__4_OFFSET UNITYSDK_OFFSET(0x13A2DB10)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__5_OFFSET UNITYSDK_OFFSET(0x13A2DB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 73711;

	class UIActivityHotPotLevelEndPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__5; // 0x10
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__4; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* curCardIDs; // 0x20
		::System::Int32 curChapter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFailTips_b__0(::KINMNJGBFLP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::KINMNJGBFLP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__0_OFFSET))(this, x);
		}

		::System::Object* _RefreshFailTips_b__2(::KINMNJGBFLP* build)
		{
			return ((::System::Object*(*)(::PVOID, ::KINMNJGBFLP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__2_OFFSET))(this, build);
		}

		::System::Boolean _RefreshFailTips_b__4(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__4_OFFSET))(this, id);
		}

		::System::Boolean _RefreshFailTips_b__5(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__5_OFFSET))(this, id);
		}
	};
}
