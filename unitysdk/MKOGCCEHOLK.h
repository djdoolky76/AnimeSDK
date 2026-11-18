#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class BPPPBAHJEIE;
namespace MoleMole { class UIGeneralUserAgreementDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }

#define MKOGCCEHOLK_ADKACMFOAFD_OFFSET UNITYSDK_OFFSET(0x18B502E0)
#define MKOGCCEHOLK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18B4FD10)
#define MKOGCCEHOLK_DDJKEDHKPBG_OFFSET UNITYSDK_OFFSET(0x18B50260)
#define MKOGCCEHOLK_EKKHABODNHI_OFFSET UNITYSDK_OFFSET(0x18B50B70)
#define MKOGCCEHOLK_FIHGKFLOKCG_OFFSET UNITYSDK_OFFSET(0x18B507C0)
#define MKOGCCEHOLK_HBNHHDGPDHL_OFFSET UNITYSDK_OFFSET(0x18B50840)
#define MKOGCCEHOLK_IMOHFEEAMJG_OFFSET UNITYSDK_OFFSET(0x18B50330)
#define MKOGCCEHOLK_JMPKODCLNDJ_OFFSET UNITYSDK_OFFSET(0x18B50BF0)
#define MKOGCCEHOLK_NBDBGJGKMPF_OFFSET UNITYSDK_OFFSET(0x18B508C0)
#define MKOGCCEHOLK_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x18B50690)
#define MKOGCCEHOLK_OIIGKNHMGIB_OFFSET UNITYSDK_OFFSET(0x18B50C70)
#define MKOGCCEHOLK_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x18B50170)
#define MKOGCCEHOLK_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18B4F350)
#define MKOGCCEHOLK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B501D0)

inline static constexpr unsigned int MKOGCCEHOLK_TypeDefinitionIndex = 43539;

class MKOGCCEHOLK : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::MKOGCCEHOLK** StaticGet_PMKINFHDLFD()
	{
		return (::MKOGCCEHOLK**)Il2CppClass::FromTypeDefinitionIndex(MKOGCCEHOLK_TypeDefinitionIndex)->GetStaticField(0x46AD0);
	}
	// static const ::System::String* IAJMIDHDHJF; // 0x0
	// static const ::System::String* MEMAFNBEOPA; // 0x0
	// static const ::System::String* NOJHMHBMJPD; // 0x0
	// static const ::System::String* NFLMEODCDKI; // 0x0
	::MoleMole::UIGeneralUserAgreementDialogPopWindowController* GNODEDJEOED; // 0x18
	::MoleMole::UITextLink* KNFPLIPGIPJ; // 0x20
	::BPPPBAHJEIE* KNEFINJGIIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_ONCLOSE_OFFSET))(this);
	}

	::System::Void DDJKEDHKPBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_DDJKEDHKPBG_OFFSET))(this);
	}

	::System::Void ADKACMFOAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_ADKACMFOAFD_OFFSET))(this);
	}

	::System::Void IMOHFEEAMJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_IMOHFEEAMJG_OFFSET))(this);
	}

	static ::MKOGCCEHOLK* NJLLMPCDOEB()
	{
		return ((::MKOGCCEHOLK*(*)())((::PBYTE)hIl2Cpp + MKOGCCEHOLK_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void FIHGKFLOKCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_FIHGKFLOKCG_OFFSET))(this);
	}

	::System::Void HBNHHDGPDHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_HBNHHDGPDHL_OFFSET))(this);
	}

	::System::Void NBDBGJGKMPF(::System::String* EIHOLFJMBBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_NBDBGJGKMPF_OFFSET))(this, EIHOLFJMBBJ);
	}

	::System::Void JMPKODCLNDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_JMPKODCLNDJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void EKKHABODNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_EKKHABODNHI_OFFSET))(this);
	}

	::System::Void OIIGKNHMGIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOGCCEHOLK_OIIGKNHMGIB_OFFSET))(this);
	}
};
