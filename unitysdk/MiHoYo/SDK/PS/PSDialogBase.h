#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::PS { class SDKUIController; }
namespace MiHoYo::SDK::PS { class SDKUIDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_PSDIALOGBASE_A6A4F0FA076A5E5D_OFFSET UNITYSDK_OFFSET(0x39067E0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_A96D35592E82A76D_OFFSET UNITYSDK_OFFSET(0x3A0BBB0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_AFBFBC5C5915E294_OFFSET UNITYSDK_OFFSET(0x3A0BAF0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_B15277FE510A2233_OFFSET UNITYSDK_OFFSET(0x3A0BD20)
#define MIHOYO_SDK_PS_PSDIALOGBASE_B79CB0B104D6429A_OFFSET UNITYSDK_OFFSET(0x3A0B600)
#define MIHOYO_SDK_PS_PSDIALOGBASE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3A0B700)
#define MIHOYO_SDK_PS_PSDIALOGBASE_E6B04256803CD89B_OFFSET UNITYSDK_OFFSET(0x3A0B680)
#define MIHOYO_SDK_PS_PSDIALOGBASE_F2DB5535DDB17830_OFFSET UNITYSDK_OFFSET(0x3A0BAC0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_F7520718CD11ED08_OFFSET UNITYSDK_OFFSET(0x3A0B9F0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A0B290)
#define MIHOYO_SDK_PS_PSDIALOGBASE_FE02383FA67E194C_OFFSET UNITYSDK_OFFSET(0x3A0BC70)
#define MIHOYO_SDK_PS_PSDIALOGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSDialogBase_TypeDefinitionIndex = 12776;

	class PSDialogBase : public ::MiHoYo::SDK::UIElement
	{
	public:
		::System::Action* OnDialogConfirmed; // 0x60
		::System::Action* OnDialogCanceled; // 0x68
		::System::Action_1<::UnityEngine::GameObject*>* OnDialogHighlightedChanged; // 0x70
		::UnityEngine::GameObject* ConfirmButtonObject; // 0x78
		::UnityEngine::GameObject* CancelButtonObject; // 0x80
		::MiHoYo::SDK::PS::SDKUIController* A8F63DC331F6A9FF; // 0x88
		::MiHoYo::SDK::PS::SDKUIDialog* BD8C7AA873E98B3B; // 0x90
		::UnityEngine::GameObject* B346A3BE321E32AA; // 0x98
		::UnityEngine::GameObject* F4CE13A3777192ED; // 0xA0
		::UnityEngine::GameObject* FF30865F05632964; // 0xA8
		::UnityEngine::GameObject* FDB2B0CB3B627E64; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void F2DB5535DDB17830(::UnityEngine::GameObject* A86A90C31A146E9C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_F2DB5535DDB17830_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Void A6A4F0FA076A5E5D(::UnityEngine::GameObject* A86A90C31A146E9C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_A6A4F0FA076A5E5D_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::String* A96D35592E82A76D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_A96D35592E82A76D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void FE02383FA67E194C(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_FE02383FA67E194C_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F7520718CD11ED08()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_F7520718CD11ED08_OFFSET))(this);
		}

		::System::Void E6B04256803CD89B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_E6B04256803CD89B_OFFSET))(this);
		}

		::System::String* AFBFBC5C5915E294()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_AFBFBC5C5915E294_OFFSET))(this);
		}

		::System::Void B15277FE510A2233(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_B15277FE510A2233_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void B79CB0B104D6429A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_B79CB0B104D6429A_OFFSET))(this);
		}
	};
}
