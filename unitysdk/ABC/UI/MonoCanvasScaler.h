#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler.h"

namespace ABC::UI { class MonoCanvasPlatformAdapter_CanvasAdapter; }

#define ABC_UI_MONOCANVASSCALER_A458C88B08D1D2E8_OFFSET UNITYSDK_OFFSET(0x1FBB8C0)
#define ABC_UI_MONOCANVASSCALER_A743A963F4A8E317_OFFSET UNITYSDK_OFFSET(0x1FBBAA0)
#define ABC_UI_MONOCANVASSCALER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x1FBB820)
#define ABC_UI_MONOCANVASSCALER_B3F56D93C4FBD3E6_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define ABC_UI_MONOCANVASSCALER_E4DD1634F1AE5955_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define ABC_UI_MONOCANVASSCALER_F773C7752BEAA9DA_OFFSET UNITYSDK_OFFSET(0x1FBBA20)
#define ABC_UI_MONOCANVASSCALER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x1FBB780)
#define ABC_UI_MONOCANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBB60)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoCanvasScaler_TypeDefinitionIndex = 6830;

	class MonoCanvasScaler : public ::UnityEngine::UI::CanvasScaler
	{
	public:
		::System::Void A743A963F4A8E317(::System::Boolean A450CAA3C0C5E2B4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_A743A963F4A8E317_OFFSET))(this, A450CAA3C0C5E2B4);
		}

		::System::Void B3F56D93C4FBD3E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_B3F56D93C4FBD3E6_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E4DD1634F1AE5955()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_E4DD1634F1AE5955_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F773C7752BEAA9DA(::ABC::UI::MonoCanvasPlatformAdapter_CanvasAdapter* FA48503CDEFD13A8)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoCanvasPlatformAdapter_CanvasAdapter*))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_F773C7752BEAA9DA_OFFSET))(this, FA48503CDEFD13A8);
		}

		::System::Void A458C88B08D1D2E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCANVASSCALER_A458C88B08D1D2E8_OFFSET))(this);
		}
	};
}
