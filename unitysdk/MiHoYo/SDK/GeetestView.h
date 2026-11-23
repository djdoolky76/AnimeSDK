#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFF92DDDDB4A767.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

class AB74579FB18469C1_GeetestModel;
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }

#define MIHOYO_SDK_GEETESTVIEW_ACF05D9D75E6D7E2_OFFSET UNITYSDK_OFFSET(0x3946640)
#define MIHOYO_SDK_GEETESTVIEW_B826E404122BCE59_OFFSET UNITYSDK_OFFSET(0x39464D0)
#define MIHOYO_SDK_GEETESTVIEW_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39466C0)
#define MIHOYO_SDK_GEETESTVIEW_E2B79DADDA46B1A6_OFFSET UNITYSDK_OFFSET(0x39468D0)
#define MIHOYO_SDK_GEETESTVIEW_E74E21FF76D36062_OFFSET UNITYSDK_OFFSET(0x39067E0)
#define MIHOYO_SDK_GEETESTVIEW_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3946420)
#define MIHOYO_SDK_GEETESTVIEW_EA625A3D5D3DB485_OFFSET UNITYSDK_OFFSET(0x3946550)
#define MIHOYO_SDK_GEETESTVIEW_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3946400)
#define MIHOYO_SDK_GEETESTVIEW_F98F9548B32CD30E_OFFSET UNITYSDK_OFFSET(0x3946970)
#define MIHOYO_SDK_GEETESTVIEW_FBADB569F581527A_OFFSET UNITYSDK_OFFSET(0x3946B70)
#define MIHOYO_SDK_GEETESTVIEW_FBD256D62EB5BCFA_OFFSET UNITYSDK_OFFSET(0x3946AD0)
#define MIHOYO_SDK_GEETESTVIEW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39462F0)
#define MIHOYO_SDK_GEETESTVIEW_FE5CA85EFCE20FEC_OFFSET UNITYSDK_OFFSET(0x3946C20)
#define MIHOYO_SDK_GEETESTVIEW_FEB2C39B9A970D92_OFFSET UNITYSDK_OFFSET(0x3946A20)
#define MIHOYO_SDK_GEETESTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView_TypeDefinitionIndex = 12405;

	class GeetestView : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::GeetestView** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::GeetestView**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::System::Action* A0FE44ED05D471B3; // 0x68
		::System::Action_1<::System::String*>* B88F21212E962031; // 0x70
		::System::Action_1<::EBFF92DDDDB4A767>* B5EEF1147DC24F22; // 0x78

		::System::Void ACF05D9D75E6D7E2(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ACF05D9D75E6D7E2_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void EA625A3D5D3DB485(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_EA625A3D5D3DB485_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void F98F9548B32CD30E(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_F98F9548B32CD30E_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FE5CA85EFCE20FEC(::System::Action_1<::EBFF92DDDDB4A767>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EBFF92DDDDB4A767>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_FE5CA85EFCE20FEC_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void B826E404122BCE59(::System::String* B960AC235824C6C8, ::AB74579FB18469C1_GeetestModel* BE68C18FBFC68992)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::AB74579FB18469C1_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_B826E404122BCE59_OFFSET))(this, B960AC235824C6C8, BE68C18FBFC68992);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void E2B79DADDA46B1A6(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_E2B79DADDA46B1A6_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void FEB2C39B9A970D92(::System::Action_1<::EBFF92DDDDB4A767>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::EBFF92DDDDB4A767>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_FEB2C39B9A970D92_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FBD256D62EB5BCFA(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_FBD256D62EB5BCFA_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E74E21FF76D36062(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_E74E21FF76D36062_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void FBADB569F581527A(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_FBADB569F581527A_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
