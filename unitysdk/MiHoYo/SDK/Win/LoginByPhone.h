#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_LOGINBYPHONE_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A564F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_A8F95FCE9D3B4E19_OFFSET UNITYSDK_OFFSET(0x3A55630)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A55760)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_AD56BF9BAA8FBA13_OFFSET UNITYSDK_OFFSET(0x39947F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_AF78CC7A99B71C69_OFFSET UNITYSDK_OFFSET(0x3A55030)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B11541A9BF96CBF4_OFFSET UNITYSDK_OFFSET(0x3A55510)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B59A8E3EC814D998_OFFSET UNITYSDK_OFFSET(0x39D4960)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B5ACAF167D922632_OFFSET UNITYSDK_OFFSET(0x39D3620)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B695766F4554C164_OFFSET UNITYSDK_OFFSET(0x3A55820)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B7E234B520B30E62_OFFSET UNITYSDK_OFFSET(0x3A55B10)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B85CB078BB4AE43A_OFFSET UNITYSDK_OFFSET(0x393E8C0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_B88B864101675091_OFFSET UNITYSDK_OFFSET(0x3A54F00)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_BA6706DFBC04795C_OFFSET UNITYSDK_OFFSET(0x3A560F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_BD38B6F1F11F1B3B_OFFSET UNITYSDK_OFFSET(0x3A55140)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x39D38A0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A55870)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_E323F0492F5FC38E_OFFSET UNITYSDK_OFFSET(0x3A55650)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_E446F18BACBD6EA5_OFFSET UNITYSDK_OFFSET(0x3A55820)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x3A55690)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A55710)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x3A55A10)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_EAFF80CE3617749B_OFFSET UNITYSDK_OFFSET(0x3A55FA0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A55AC0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x3A55840)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_F8884B2D4673DE64_OFFSET UNITYSDK_OFFSET(0x39D3640)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_FBE0ECF9A4EDE565_OFFSET UNITYSDK_OFFSET(0x3A54EE0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_FCBB74A0C89BAB2D_OFFSET UNITYSDK_OFFSET(0x3A55850)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A53DA0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A567F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByPhone_TypeDefinitionIndex = 13025;

	class LoginByPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByPhone** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::LoginByPhone**)Il2CppClass::FromTypeDefinitionIndex(LoginByPhone_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::GameObject* AB6A0AA71F1FE817; // 0x68
		::UnityEngine::GameObject* F5A3D2A498325AE1; // 0x70
		::UnityEngine::UI::Button* F279DC512941C0E0; // 0x78
		::UnityEngine::GameObject* A234218104D462E4; // 0x80
		::UnityEngine::UI::InputField* E3F11E78772F3477; // 0x88
		::UnityEngine::UI::InputField* codeInput; // 0x90
		::UnityEngine::UI::Button* F0510762E15C0137; // 0x98
		::UnityEngine::UI::Text* F3B3974D9DCB1086; // 0xA0
		::UnityEngine::UI::Button* FDC0334372D85AE5; // 0xA8
		::UnityEngine::UI::Button* F18A21434CF7AA28; // 0xB0
		::UnityEngine::UI::Button* E2858BAAE92430D9; // 0xB8
		::UnityEngine::UI::Button* A6F262CFB5C1E48F; // 0xC0
		::UnityEngine::GameObject* A7F367931B69BEC2; // 0xC8
		::UnityEngine::GameObject* AC3B3811AEA14332; // 0xD0
		::UnityEngine::GameObject* A9E8A86E12C53B5A; // 0xD8
		::UnityEngine::UI::Toggle* BEBC975D297F089B; // 0xE0
		::UnityEngine::UI::Toggle* B4E6B622270B9B5F; // 0xE8
		::UnityEngine::UI::Text* F7CD54AE78A36CAD; // 0xF0
		::UnityEngine::UI::Button* A68FF055D890E01B; // 0xF8
		::UnityEngine::UI::Button* A9B9EE9EDE5E1A79; // 0x100
		::System::Action* OnClose; // 0x108
		::System::Action* OnQRCodeLogin; // 0x110
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0x118
		::System::Action_1<::System::String*>* OnGetCode; // 0x120
		::System::Action* OnGuest; // 0x128
		::System::Action* OnAccountLogin; // 0x130
		::System::Action* OnTapTapLogin; // 0x138
		::System::Action* OnUserAgreement; // 0x140
		::System::Action* OnUserPrivacy; // 0x148
		::System::Action_1<::System::Boolean>* OnToggleClicked; // 0x150
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x158
		::System::Action* OnNotifyClose; // 0x160
		::System::Boolean AE0DBF5B307E1580; // 0x168
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0x16C
		::System::Boolean E1041FCB5D68AA87; // 0x170
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0x178

		::System::Void FBE0ECF9A4EDE565()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_FBE0ECF9A4EDE565_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE__CTOR_OFFSET))(this);
		}

		::System::Void A8F95FCE9D3B4E19(::System::Boolean FE9C48DCF56C7987)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_A8F95FCE9D3B4E19_OFFSET))(this, FE9C48DCF56C7987);
		}

		::System::Void B11541A9BF96CBF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B11541A9BF96CBF4_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void BD38B6F1F11F1B3B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_BD38B6F1F11F1B3B_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B5ACAF167D922632(::System::Boolean FE9C48DCF56C7987)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B5ACAF167D922632_OFFSET))(this, FE9C48DCF56C7987);
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		::System::Void BA6706DFBC04795C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_BA6706DFBC04795C_OFFSET))(this);
		}

		::System::Void E446F18BACBD6EA5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_E446F18BACBD6EA5_OFFSET))(this);
		}

		::System::Void AD56BF9BAA8FBA13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_AD56BF9BAA8FBA13_OFFSET))(this);
		}

		::System::Void B85CB078BB4AE43A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B85CB078BB4AE43A_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void B7E234B520B30E62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B7E234B520B30E62_OFFSET))(this);
		}

		::System::Void EAFF80CE3617749B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_EAFF80CE3617749B_OFFSET))(this);
		}

		::System::Void B695766F4554C164(::System::String* A24289F86856ED60)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B695766F4554C164_OFFSET))(this, A24289F86856ED60);
		}

		::System::Void FCBB74A0C89BAB2D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_FCBB74A0C89BAB2D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void F8884B2D4673DE64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_F8884B2D4673DE64_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		::System::Void E323F0492F5FC38E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_E323F0492F5FC38E_OFFSET))(this);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Void B59A8E3EC814D998(::System::Boolean FD96BCA2122A7513)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B59A8E3EC814D998_OFFSET))(this, FD96BCA2122A7513);
		}

		::System::Void AF78CC7A99B71C69()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_AF78CC7A99B71C69_OFFSET))(this);
		}

		::System::Void B88B864101675091()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_B88B864101675091_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_F328E4D8818B1E12_OFFSET))(this);
		}
	};
}
