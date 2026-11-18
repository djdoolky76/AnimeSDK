#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }

#define MOLEMOLE_AFTERALLPOPUP_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x164F9B10)
#define MOLEMOLE_AFTERALLPOPUP_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x164F9B30)
#define MOLEMOLE_AFTERALLPOPUP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x164F9B20)
#define MOLEMOLE_AFTERALLPOPUP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x164F9B70)
#define MOLEMOLE_AFTERALLPOPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x164F9B40)

namespace MoleMole
{
	inline static constexpr unsigned int AfterAllPopup_TypeDefinitionIndex = 90054;

	class AfterAllPopup : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* _callback; // 0x28

		::System::Void _ctor(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERALLPOPUP__CTOR_OFFSET))(this, callback);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERALLPOPUP_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERALLPOPUP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERALLPOPUP_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERALLPOPUP_ONPROCESS_OFFSET))(this);
		}
	};
}
