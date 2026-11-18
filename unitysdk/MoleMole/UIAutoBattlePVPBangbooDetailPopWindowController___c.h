#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHCODLNCFGF;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15943580)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159435C0)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x159435D0)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET UNITYSDK_OFFSET(0x159435F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex = 64180;

	class UIAutoBattlePVPBangbooDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::AHCODLNCFGF*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::AHCODLNCFGF*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44D70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44D78);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__8_1()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::AHCODLNCFGF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHCODLNCFGF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}

		::System::Void _RefreshView_b__8_1(::KNLFLMMHALL_1<::System::Object*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET))(this, item);
		}
	};
}
