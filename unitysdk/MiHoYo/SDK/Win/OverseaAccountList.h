#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/F5F0D9F823685E5A.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
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

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_A0A71FAD72187B28_OFFSET UNITYSDK_OFFSET(0x3A72700)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A71EF0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B44D2FC407BCF433_OFFSET UNITYSDK_OFFSET(0x3A71F40)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B664D4565BD592E7_1_OFFSET UNITYSDK_OFFSET(0x3A70F60)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B664D4565BD592E7_OFFSET UNITYSDK_OFFSET(0x3A71120)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B7D47A86835D4364_OFFSET UNITYSDK_OFFSET(0x3A72480)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x3A72840)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A71FF0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E16DA54339137738_OFFSET UNITYSDK_OFFSET(0x3A71460)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E4C567A4DC22012C_OFFSET UNITYSDK_OFFSET(0x3A70E00)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E56E63B8B61302B2_OFFSET UNITYSDK_OFFSET(0x3A71DD0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E84389FA18C73315_OFFSET UNITYSDK_OFFSET(0x3A71B40)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A71410)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A721D0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F9127B282849B5BC_OFFSET UNITYSDK_OFFSET(0x3A71B20)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F9A218EF0597C4B0_OFFSET UNITYSDK_OFFSET(0x3A71DA0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FAA575311F2D781F_OFFSET UNITYSDK_OFFSET(0x3A71CF0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A70730)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FDD620F65A6B534F_OFFSET UNITYSDK_OFFSET(0x3A72570)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList_TypeDefinitionIndex = 11930;

	class OverseaAccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountList** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountList**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList_TypeDefinitionIndex)->GetStaticField(0x0);
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
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccount; // 0xD8
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccountRecord; // 0xE0
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnSelectAccount; // 0xE8
		::System::Action* OnClickLastButton; // 0xF0
		::MiHoYo::SDK::AccountModel* currentAccount; // 0xF8
		::UnityEngine::UI::Image* AC1206061378B06C; // 0x100
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* F5BF27680769F915; // 0x108

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FDD620F65A6B534F(::System::Boolean A34427B9C5626722, ::BED79290917896D4::F5F0D9F823685E5A BCBAF5BAC5CA2808)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BED79290917896D4::F5F0D9F823685E5A))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FDD620F65A6B534F_OFFSET))(this, A34427B9C5626722, BCBAF5BAC5CA2808);
		}

		::System::Void E4C567A4DC22012C(::System::Boolean E187E077399D5E34)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E4C567A4DC22012C_OFFSET))(this, E187E077399D5E34);
		}

		::System::Void B7D47A86835D4364(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B7D47A86835D4364_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void FAA575311F2D781F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FAA575311F2D781F_OFFSET))(this);
		}

		::System::Void B44D2FC407BCF433()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B44D2FC407BCF433_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F328E4D8818B1E12_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* BC2191EC83AE8898)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_BFA7961FF2AC380B_OFFSET))(BC2191EC83AE8898);
		}

		::System::Void F9127B282849B5BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F9127B282849B5BC_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F9A218EF0597C4B0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F9A218EF0597C4B0_OFFSET))(this);
		}

		::System::Void E16DA54339137738()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E16DA54339137738_OFFSET))(this);
		}

		::System::Void A0A71FAD72187B28()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_A0A71FAD72187B28_OFFSET))(this);
		}

		::System::Void E84389FA18C73315(::System::Int32 A0C1F1E95D5F6CA9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E84389FA18C73315_OFFSET))(this, A0C1F1E95D5F6CA9);
		}

		::System::Void B664D4565BD592E7(::System::String* A5C299C395D3E1B2, ::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B664D4565BD592E7_OFFSET))(this, A5C299C395D3E1B2, BC63F4052E4478D7);
		}

		::System::Void E56E63B8B61302B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_E56E63B8B61302B2_OFFSET))(this);
		}

		::System::Void B664D4565BD592E7_1(::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_B664D4565BD592E7_1_OFFSET))(this, AE11B914AE12D7B2);
		}
	};
}
