#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class EKADPOPDKDC;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }

#define CGABPNAKJDD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1532DB40)
#define CGABPNAKJDD_EEJFGABFNON_OFFSET UNITYSDK_OFFSET(0x1532E0A0)
#define CGABPNAKJDD_KPAAECFGKOD_OFFSET UNITYSDK_OFFSET(0x1532E670)
#define CGABPNAKJDD_LHAGNNDHKCC_OFFSET UNITYSDK_OFFSET(0x1532E610)
#define CGABPNAKJDD_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x1532E140)
#define CGABPNAKJDD_NECJJPOPLMA_OFFSET UNITYSDK_OFFSET(0x1532DFC0)
#define CGABPNAKJDD_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x1532E4E0)
#define CGABPNAKJDD_NKPBGNCKFDM_OFFSET UNITYSDK_OFFSET(0x1532E040)
#define CGABPNAKJDD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1532DED0)
#define CGABPNAKJDD_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1532D7B0)
#define CGABPNAKJDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1532DF30)

inline static constexpr unsigned int CGABPNAKJDD_TypeDefinitionIndex = 78313;

class CGABPNAKJDD : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CGABPNAKJDD** StaticGet_PMKINFHDLFD()
	{
		return (::CGABPNAKJDD**)Il2CppClass::FromTypeDefinitionIndex(CGABPNAKJDD_TypeDefinitionIndex)->GetStaticField(0x3A630);
	}
	::EKADPOPDKDC* KMMKMGDHCOI; // 0x18
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* HDNKMBCIOHD; // 0x20
	::System::Boolean BKKKGOJKICI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_ONCLOSE_OFFSET))(this);
	}

	::System::Void NECJJPOPLMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_NECJJPOPLMA_OFFSET))(this);
	}

	::System::Void NKPBGNCKFDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_NKPBGNCKFDM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void EEJFGABFNON(::System::Boolean BKKKGOJKICI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGABPNAKJDD_EEJFGABFNON_OFFSET))(this, BKKKGOJKICI);
	}

	static ::CGABPNAKJDD* NJLLMPCDOEB()
	{
		return ((::CGABPNAKJDD*(*)())((::PBYTE)hIl2Cpp + CGABPNAKJDD_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void LHAGNNDHKCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_LHAGNNDHKCC_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_LMNDPNDILMB_OFFSET))(this);
	}

	::System::Void KPAAECFGKOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABPNAKJDD_KPAAECFGKOD_OFFSET))(this);
	}
};
