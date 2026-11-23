#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_A0A71FAD72187B28_OFFSET UNITYSDK_OFFSET(0x3A9D2C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A9CC10)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_B44D2FC407BCF433_OFFSET UNITYSDK_OFFSET(0x3A71F40)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_B664D4565BD592E7_OFFSET UNITYSDK_OFFSET(0x3A9B9A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BA555DA3763D448A_OFFSET UNITYSDK_OFFSET(0x3A9D1E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x3A9D800)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A9CC60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E16DA54339137738_OFFSET UNITYSDK_OFFSET(0x3A9BCE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E4C567A4DC22012C_OFFSET UNITYSDK_OFFSET(0x3A9B840)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E56E63B8B61302B2_OFFSET UNITYSDK_OFFSET(0x3A9CAF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E84389FA18C73315_OFFSET UNITYSDK_OFFSET(0x3A9C440)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A9BC90)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_EE24E1FBB6E523C9_OFFSET UNITYSDK_OFFSET(0x3A9D0F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A9CE40)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F9127B282849B5BC_OFFSET UNITYSDK_OFFSET(0x3A71B20)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F9A218EF0597C4B0_OFFSET UNITYSDK_OFFSET(0x3A9CAC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_FAA575311F2D781F_OFFSET UNITYSDK_OFFSET(0x3A9C9D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A9B2B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList_TypeDefinitionIndex = 12089;

	class AccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountList** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountList**)Il2CppClass::FromTypeDefinitionIndex(AccountList_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* FF61643969C07370; // 0x68
		::UnityEngine::UI::Text* F11069FD419E84F7; // 0x70
		::UnityEngine::UI::Button* E5AD147593238D46; // 0x78
		::UnityEngine::UI::Text* F643062E4A85A84E; // 0x80
		::UnityEngine::UI::Dropdown* accountListDropdown; // 0x88
		::UnityEngine::UI::Text* showText; // 0x90
		::UnityEngine::UI::Image* expandButtonImage; // 0x98
		::UnityEngine::UI::Image* collapseButtonImage; // 0xA0
		::UnityEngine::UI::Image* expandBackgroundImage; // 0xA8
		::UnityEngine::UI::Image* collapseBackgroundImage; // 0xB0
		::UnityEngine::UI::Button* deleteButton; // 0xB8
		::System::Action* OnClose; // 0xC0
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnConfirm; // 0xC8
		::System::Action* OnLoginOtherAccount; // 0xD0
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccountBtnClicked; // 0xD8
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnSelectAccount; // 0xE0
		::System::Action* OnClickLastButton; // 0xE8
		::MiHoYo::SDK::AccountModel* currentAccount; // 0xF0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* F5BF27680769F915; // 0xF8

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E84389FA18C73315(::System::Int32 A0C1F1E95D5F6CA9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E84389FA18C73315_OFFSET))(this, A0C1F1E95D5F6CA9);
		}

		::System::Void BA555DA3763D448A(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* BC2191EC83AE8898)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BA555DA3763D448A_OFFSET))(this, BC2191EC83AE8898);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void B44D2FC407BCF433()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_B44D2FC407BCF433_OFFSET))(this);
		}

		::System::Void A0A71FAD72187B28()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_A0A71FAD72187B28_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* BC2191EC83AE8898)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BFA7961FF2AC380B_OFFSET))(BC2191EC83AE8898);
		}

		::System::Void E4C567A4DC22012C(::System::Boolean E187E077399D5E34)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E4C567A4DC22012C_OFFSET))(this, E187E077399D5E34);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void B664D4565BD592E7(::System::String* A5C299C395D3E1B2, ::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_B664D4565BD592E7_OFFSET))(this, A5C299C395D3E1B2, BC63F4052E4478D7);
		}

		::System::Void E56E63B8B61302B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E56E63B8B61302B2_OFFSET))(this);
		}

		::System::Void E16DA54339137738()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_E16DA54339137738_OFFSET))(this);
		}

		::System::Void FAA575311F2D781F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_FAA575311F2D781F_OFFSET))(this);
		}

		::System::Void F9A218EF0597C4B0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F9A218EF0597C4B0_OFFSET))(this);
		}

		::System::Void EE24E1FBB6E523C9(::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_EE24E1FBB6E523C9_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F9127B282849B5BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F9127B282849B5BC_OFFSET))(this);
		}
	};
}
