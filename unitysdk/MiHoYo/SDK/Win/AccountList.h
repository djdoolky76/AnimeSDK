#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class AccountList_AccountListItemsInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_A0A71FAD72187B28_OFFSET UNITYSDK_OFFSET(0x393F2F0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_A61243D705276368_OFFSET UNITYSDK_OFFSET(0x393EF20)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_A74BC2EBD69868C6_OFFSET UNITYSDK_OFFSET(0x393E7F0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x393E8E0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_B44D2FC407BCF433_OFFSET UNITYSDK_OFFSET(0x393E960)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_B664D4565BD592E7_OFFSET UNITYSDK_OFFSET(0x393DEB0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x393F470)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x393E9B0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_E16DA54339137738_OFFSET UNITYSDK_OFFSET(0x393E130)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_E56E63B8B61302B2_OFFSET UNITYSDK_OFFSET(0x393E8C0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_E76544C99E105E2D_OFFSET UNITYSDK_OFFSET(0x393E850)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_E84389FA18C73315_OFFSET UNITYSDK_OFFSET(0x393E6A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x393E0E0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F27087C2F12D6AB4_OFFSET UNITYSDK_OFFSET(0x393E980)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x393DE90)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x393EC70)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F35507DBC6A3823A_OFFSET UNITYSDK_OFFSET(0x393E820)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F7005F7BE56DC3A8_OFFSET UNITYSDK_OFFSET(0x393E930)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F9127B282849B5BC_OFFSET UNITYSDK_OFFSET(0x393E680)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_F9A218EF0597C4B0_OFFSET UNITYSDK_OFFSET(0x393E8A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_FAA575311F2D781F_OFFSET UNITYSDK_OFFSET(0x393E880)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x393D890)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_FF64C07008400C9C_OFFSET UNITYSDK_OFFSET(0x393F310)
#define MIHOYO_SDK_WIN_ACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_TypeDefinitionIndex = 12452;

	class AccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::AccountList** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::AccountList**)Il2CppClass::FromTypeDefinitionIndex(AccountList_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* FF61643969C07370; // 0x68
		::UnityEngine::UI::Text* F11069FD419E84F7; // 0x70
		::UnityEngine::UI::Button* E5AD147593238D46; // 0x78
		::UnityEngine::UI::Text* F643062E4A85A84E; // 0x80
		::UnityEngine::UI::Dropdown* E32B9359D220B471; // 0x88
		::UnityEngine::UI::Text* F971C31E6629134D; // 0x90
		::UnityEngine::UI::Image* ADFA0018B5D097CB; // 0x98
		::UnityEngine::UI::Image* E53E37994CFB464E; // 0xA0
		::UnityEngine::UI::Image* F4E7C41A15B98BDF; // 0xA8
		::UnityEngine::UI::Image* FC76941EDC528337; // 0xB0
		::UnityEngine::UI::Button* A0420AEEA1FFB5E8; // 0xB8
		::UnityEngine::GameObject* EB23B9D401664015; // 0xC0
		::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo* F2C953FCB5B64AB2; // 0xC8
		::System::String* F2B4A31D4CB4AD8A; // 0xD0
		::System::String* A32444778A5A379B; // 0xD8
		::System::String* F95D832D5A316405; // 0xE0
		::System::Action* OnCloseFullDelegate; // 0xE8
		::System::Action* OnLoginOtherAccountFullDelegate; // 0xF0
		::System::Action* OnConfirmFullDelegate; // 0xF8
		::System::Action_1<::System::Int32>* OnAccountSelectedFullDelegate; // 0x100
		::System::Action_2<::System::Int32, ::System::Action_1<::System::Int32>*>* OnDeleteAccountListItemFullDelegate; // 0x108
		::System::Action* OnDeleteAccountFullDelegate; // 0x110
		::System::Action* OnNoticeExpandDropdownFullDelegate; // 0x118
		::System::Action* OnCollapseListFullDelegate; // 0x120

		::System::Void F35507DBC6A3823A(::System::String* A06E1CE568051CA4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F35507DBC6A3823A_OFFSET))(this, A06E1CE568051CA4);
		}

		::System::Void E56E63B8B61302B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_E56E63B8B61302B2_OFFSET))(this);
		}

		::System::Void E16DA54339137738()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_E16DA54339137738_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void E76544C99E105E2D(::System::String* E8C7DF7D19663BC9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_E76544C99E105E2D_OFFSET))(this, E8C7DF7D19663BC9);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F7005F7BE56DC3A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F7005F7BE56DC3A8_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FF64C07008400C9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_FF64C07008400C9C_OFFSET))(this);
		}

		::System::Void E84389FA18C73315(::System::Int32 A0C1F1E95D5F6CA9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_E84389FA18C73315_OFFSET))(this, A0C1F1E95D5F6CA9);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F9127B282849B5BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F9127B282849B5BC_OFFSET))(this);
		}

		::System::Void B664D4565BD592E7(::System::String* A5C299C395D3E1B2, ::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_B664D4565BD592E7_OFFSET))(this, A5C299C395D3E1B2, BC63F4052E4478D7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST__CTOR_OFFSET))(this);
		}

		::System::Void A74BC2EBD69868C6(::System::String* A8C4B5B55DF8F967)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_A74BC2EBD69868C6_OFFSET))(this, A8C4B5B55DF8F967);
		}

		::System::Void FAA575311F2D781F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_FAA575311F2D781F_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void B44D2FC407BCF433()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_B44D2FC407BCF433_OFFSET))(this);
		}

		::System::Void F27087C2F12D6AB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F27087C2F12D6AB4_OFFSET))(this);
		}

		::System::Void A61243D705276368()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_A61243D705276368_OFFSET))(this);
		}

		::System::Void F9A218EF0597C4B0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_F9A218EF0597C4B0_OFFSET))(this);
		}

		::System::Void A0A71FAD72187B28()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_A0A71FAD72187B28_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E8C7DF7D19663BC9, ::System::String* A06E1CE568051CA4, ::System::String* A8C4B5B55DF8F967, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo* EDB993645D73D997)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_BFA7961FF2AC380B_OFFSET))(E8C7DF7D19663BC9, A06E1CE568051CA4, A8C4B5B55DF8F967, EDB993645D73D997);
		}
	};
}
