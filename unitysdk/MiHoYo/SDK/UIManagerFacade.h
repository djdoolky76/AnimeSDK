#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class UIManager; }
namespace MiHoYo::SDK { class UIManagerFacade; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIHOYO_SDK_UIMANAGERFACADE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C015600)
#define MIHOYO_SDK_UIMANAGERFACADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0151A0)
#define MIHOYO_SDK_UIMANAGERFACADE_DESTROYALLUI_OFFSET UNITYSDK_OFFSET(0x1C0152F0)
#define MIHOYO_SDK_UIMANAGERFACADE_ENABLEUITRACKING_OFFSET UNITYSDK_OFFSET(0x1C0152D0)
#define MIHOYO_SDK_UIMANAGERFACADE_GET_INSATANCE_OFFSET UNITYSDK_OFFSET(0x1C014000)
#define MIHOYO_SDK_UIMANAGERFACADE_ISENABLEUITRACKING_OFFSET UNITYSDK_OFFSET(0x1C0152E0)
#define MIHOYO_SDK_UIMANAGERFACADE_POPUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1C0146C0)
#define MIHOYO_SDK_UIMANAGERFACADE_PUSHUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1C014190)
#define MIHOYO_SDK_UIMANAGERFACADE_SET_INSATANCE_OFFSET UNITYSDK_OFFSET(0x1C015270)

namespace MiHoYo::SDK
{
	class UIManagerFacade : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::MiHoYo::SDK::UIManager*>* m_setUIManager; // 0x10
		::System::Boolean m_bEnableUITracking; // 0x18
		static ::MiHoYo::SDK::UIManagerFacade** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::UIManagerFacade**)UnitySDK::FromName("MiHoYo.SDK", "UIManagerFacade")->GetStaticField(0x184D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::UIManagerFacade* get_Insatance()
		{
			return ((::MiHoYo::SDK::UIManagerFacade*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_GET_INSATANCE_OFFSET))();
		}

		static ::System::Void set_Insatance(::MiHoYo::SDK::UIManagerFacade* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UIManagerFacade*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_SET_INSATANCE_OFFSET))(a1);
		}

		::System::Void EnableUITracking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_ENABLEUITRACKING_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableUITracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_ISENABLEUITRACKING_OFFSET))(this);
		}

		::System::Void DestroyAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_DESTROYALLUI_OFFSET))(this);
		}

		::System::Void PushUIManager(::MiHoYo::SDK::UIManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_PUSHUIMANAGER_OFFSET))(this, a1);
		}

		::System::Void PopUIManager(::MiHoYo::SDK::UIManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_POPUIMANAGER_OFFSET))(this, a1);
		}

	};
}
