#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class JIGFJGLOAID;
namespace MoleMole { class UIGeneralMobileLoginPopWindowController; }
namespace System { class String; }

#define BDLHAPIANLH_ADKACMFOAFD_OFFSET UNITYSDK_OFFSET(0x14C364B0)
#define BDLHAPIANLH_AMOCAPKBBAO_OFFSET UNITYSDK_OFFSET(0x14C36E30)
#define BDLHAPIANLH_BALCJKNMHAJ_OFFSET UNITYSDK_OFFSET(0x14C36EB0)
#define BDLHAPIANLH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14C36F30)
#define BDLHAPIANLH_BOLNJKBOOFH_OFFSET UNITYSDK_OFFSET(0x14C37D60)
#define BDLHAPIANLH_CEBGEGCDMPD_OFFSET UNITYSDK_OFFSET(0x14C382D0)
#define BDLHAPIANLH_CNNFOOINOKJ_OFFSET UNITYSDK_OFFSET(0x14C36D10)
#define BDLHAPIANLH_EKKHABODNHI_OFFSET UNITYSDK_OFFSET(0x14C37CE0)
#define BDLHAPIANLH_GFDEIAKGDKB_OFFSET UNITYSDK_OFFSET(0x14C38580)
#define BDLHAPIANLH_HBNHHDGPDHL_OFFSET UNITYSDK_OFFSET(0x14C383D0)
#define BDLHAPIANLH_IMOHFEEAMJG_OFFSET UNITYSDK_OFFSET(0x14C38060)
#define BDLHAPIANLH_LBMDHDOCNCF_OFFSET UNITYSDK_OFFSET(0x14C37B20)
#define BDLHAPIANLH_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x14C37650)
#define BDLHAPIANLH_MCLCENNIDMI_OFFSET UNITYSDK_OFFSET(0x14C36D20)
#define BDLHAPIANLH_NBDBGJGKMPF_OFFSET UNITYSDK_OFFSET(0x14C385D0)
#define BDLHAPIANLH_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x14C38450)
#define BDLHAPIANLH_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14C36730)
#define BDLHAPIANLH_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x14C369F0)
#define BDLHAPIANLH_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C361A0)
#define BDLHAPIANLH_PLHAAJHOOGA_OFFSET UNITYSDK_OFFSET(0x14C38350)
#define BDLHAPIANLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14C36C80)

inline static constexpr unsigned int BDLHAPIANLH_TypeDefinitionIndex = 68618;

class BDLHAPIANLH : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::BDLHAPIANLH** StaticGet_PMKINFHDLFD()
	{
		return (::BDLHAPIANLH**)Il2CppClass::FromTypeDefinitionIndex(BDLHAPIANLH_TypeDefinitionIndex)->GetStaticField(0x49710);
	}
	// static const ::System::String* IAJMIDHDHJF; // 0x0
	// static const ::System::String* MEMAFNBEOPA; // 0x0
	::JIGFJGLOAID* KMMKMGDHCOI; // 0x18
	::MoleMole::UIGeneralMobileLoginPopWindowController* HDNKMBCIOHD; // 0x20
	::System::Boolean KIMONJBOPIB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* NOEDCEEFCDP, ::System::String* BJPMHCEDFFP, ::System::String* ONLPCIGPPEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDLHAPIANLH_ONELEMENTSTATUSCHANGED_OFFSET))(this, NOEDCEEFCDP, BJPMHCEDFFP, ONLPCIGPPEK);
	}

	::System::Void CNNFOOINOKJ(::System::String* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDLHAPIANLH_CNNFOOINOKJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MCLCENNIDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_MCLCENNIDMI_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void LBMDHDOCNCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_LBMDHDOCNCF_OFFSET))(this);
	}

	::System::Void EKKHABODNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_EKKHABODNHI_OFFSET))(this);
	}

	::System::Void ADKACMFOAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_ADKACMFOAFD_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_LMNDPNDILMB_OFFSET))(this);
	}

	::System::Void IMOHFEEAMJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_IMOHFEEAMJG_OFFSET))(this);
	}

	::System::Void CEBGEGCDMPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_CEBGEGCDMPD_OFFSET))(this);
	}

	::System::Void AMOCAPKBBAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_AMOCAPKBBAO_OFFSET))(this);
	}

	::System::Void PLHAAJHOOGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_PLHAAJHOOGA_OFFSET))(this);
	}

	::System::Void HBNHHDGPDHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_HBNHHDGPDHL_OFFSET))(this);
	}

	::System::Void BALCJKNMHAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_BALCJKNMHAJ_OFFSET))(this);
	}

	static ::BDLHAPIANLH* NJLLMPCDOEB()
	{
		return ((::BDLHAPIANLH*(*)())((::PBYTE)hIl2Cpp + BDLHAPIANLH_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void BOLNJKBOOFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_BOLNJKBOOFH_OFFSET))(this);
	}

	::System::Void GFDEIAKGDKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHAPIANLH_GFDEIAKGDKB_OFFSET))(this);
	}

	::System::Void NBDBGJGKMPF(::System::String* EIHOLFJMBBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BDLHAPIANLH_NBDBGJGKMPF_OFFSET))(this, EIHOLFJMBBJ);
	}
};
