#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class JIGFJGLOAID;
namespace MoleMole { class UIGeneralMobileLoginPopWindowController; }
namespace System { class String; }

#define NLJACOKFKII_AMOCAPKBBAO_OFFSET UNITYSDK_OFFSET(0x105CB4E0)
#define NLJACOKFKII_BALCJKNMHAJ_OFFSET UNITYSDK_OFFSET(0x105CBD60)
#define NLJACOKFKII_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x105CA330)
#define NLJACOKFKII_CAONHNPDMCA_OFFSET UNITYSDK_OFFSET(0x105CB310)
#define NLJACOKFKII_CEBGEGCDMPD_OFFSET UNITYSDK_OFFSET(0x105CB6B0)
#define NLJACOKFKII_CNNFOOINOKJ_OFFSET UNITYSDK_OFFSET(0x105CBDE0)
#define NLJACOKFKII_EKKHABODNHI_OFFSET UNITYSDK_OFFSET(0x105CACE0)
#define NLJACOKFKII_HBNHHDGPDHL_OFFSET UNITYSDK_OFFSET(0x105CBC60)
#define NLJACOKFKII_IMOHFEEAMJG_OFFSET UNITYSDK_OFFSET(0x105CBF20)
#define NLJACOKFKII_LBMDHDOCNCF_OFFSET UNITYSDK_OFFSET(0x105CB880)
#define NLJACOKFKII_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x105CAD60)
#define NLJACOKFKII_NBDBGJGKMPF_OFFSET UNITYSDK_OFFSET(0x105CBA40)
#define NLJACOKFKII_NIBDIFLOGOI_OFFSET UNITYSDK_OFFSET(0x105CBCE0)
#define NLJACOKFKII_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x105CBDF0)
#define NLJACOKFKII_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x105CA9A0)
#define NLJACOKFKII_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x105CAAB0)
#define NLJACOKFKII_ONSHOW_OFFSET UNITYSDK_OFFSET(0x105C9D00)
#define NLJACOKFKII__CTOR_OFFSET UNITYSDK_OFFSET(0x105CAC50)

inline static constexpr unsigned int NLJACOKFKII_TypeDefinitionIndex = 57699;

class NLJACOKFKII : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::NLJACOKFKII** StaticGet_PMKINFHDLFD()
	{
		return (::NLJACOKFKII**)Il2CppClass::FromTypeDefinitionIndex(NLJACOKFKII_TypeDefinitionIndex)->GetStaticField(0x4AFB0);
	}
	// static const ::System::String* IAJMIDHDHJF; // 0x0
	// static const ::System::String* MEMAFNBEOPA; // 0x0
	// static const ::System::String* NKCKHNFCFCF; // 0x0
	::MoleMole::UIGeneralMobileLoginPopWindowController* JDPEEGMOLNB; // 0x18
	::JIGFJGLOAID* KMMKMGDHCOI; // 0x20
	::System::Boolean KIMONJBOPIB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* NOEDCEEFCDP, ::System::String* BJPMHCEDFFP, ::System::String* ONLPCIGPPEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NLJACOKFKII_ONELEMENTSTATUSCHANGED_OFFSET))(this, NOEDCEEFCDP, BJPMHCEDFFP, ONLPCIGPPEK);
	}

	::System::Void EKKHABODNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_EKKHABODNHI_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_LMNDPNDILMB_OFFSET))(this);
	}

	::System::Void CAONHNPDMCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_CAONHNPDMCA_OFFSET))(this);
	}

	::System::Void AMOCAPKBBAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_AMOCAPKBBAO_OFFSET))(this);
	}

	::System::Void CEBGEGCDMPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_CEBGEGCDMPD_OFFSET))(this);
	}

	::System::Void LBMDHDOCNCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_LBMDHDOCNCF_OFFSET))(this);
	}

	::System::Void NBDBGJGKMPF(::System::String* EIHOLFJMBBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLJACOKFKII_NBDBGJGKMPF_OFFSET))(this, EIHOLFJMBBJ);
	}

	::System::Void NIBDIFLOGOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_NIBDIFLOGOI_OFFSET))(this);
	}

	::System::Void BALCJKNMHAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_BALCJKNMHAJ_OFFSET))(this);
	}

	::System::Void CNNFOOINOKJ(::System::String* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NLJACOKFKII_CNNFOOINOKJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::NLJACOKFKII* NJLLMPCDOEB()
	{
		return ((::NLJACOKFKII*(*)())((::PBYTE)hIl2Cpp + NLJACOKFKII_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void HBNHHDGPDHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_HBNHHDGPDHL_OFFSET))(this);
	}

	::System::Void IMOHFEEAMJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJACOKFKII_IMOHFEEAMJG_OFFSET))(this);
	}
};
