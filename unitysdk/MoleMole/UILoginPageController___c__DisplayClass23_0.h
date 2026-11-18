#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginPageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18807F90)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__0_OFFSET UNITYSDK_OFFSET(0x18807FA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__1_OFFSET UNITYSDK_OFFSET(0x188080A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__2_OFFSET UNITYSDK_OFFSET(0x18808260)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass23_0_TypeDefinitionIndex = 39123;

	class UILoginPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* k_v; // 0x10
		::System::String* cacheUrl; // 0x18
		::MoleMole::UILoginPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestServerList_b__0(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__0_OFFSET))(this, url);
		}

		::System::Void _RequestServerList_b__1(::System::String* dispatch_url, ::System::Int32 retCode, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__1_OFFSET))(this, dispatch_url, retCode, errMsg);
		}

		::System::Void _RequestServerList_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_0__REQUESTSERVERLIST_B__2_OFFSET))(this);
		}
	};
}
