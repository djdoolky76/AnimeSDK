#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class KEOHIGMLCDE;
namespace MoleMole { class UIGeneralPluginUIDialogPopWindowController; }

#define KONJMPCHELC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1791A8A0)
#define KONJMPCHELC_HMHIMHFJPEI_OFFSET UNITYSDK_OFFSET(0x1791AFF0)
#define KONJMPCHELC_HNHOBFJGFLJ_OFFSET UNITYSDK_OFFSET(0x1791B070)
#define KONJMPCHELC_KCGMJCJJDKK_OFFSET UNITYSDK_OFFSET(0x1791AF70)
#define KONJMPCHELC_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x1791B0F0)
#define KONJMPCHELC_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1791A7E0)
#define KONJMPCHELC_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1791A850)
#define KONJMPCHELC__CTOR_OFFSET UNITYSDK_OFFSET(0x1791AEE0)

inline static constexpr unsigned int KONJMPCHELC_TypeDefinitionIndex = 68964;

class KONJMPCHELC : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::KONJMPCHELC** StaticGet_PMKINFHDLFD()
	{
		return (::KONJMPCHELC**)Il2CppClass::FromTypeDefinitionIndex(KONJMPCHELC_TypeDefinitionIndex)->GetStaticField(0x4BE10);
	}
	::MoleMole::UIGeneralPluginUIDialogPopWindowController* EEJMBHNFCIJ; // 0x18
	::KEOHIGMLCDE* KMMKMGDHCOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC__CTOR_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_ONSHOW_OFFSET))(this);
	}

	::System::Void KCGMJCJJDKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_KCGMJCJJDKK_OFFSET))(this);
	}

	::System::Void HMHIMHFJPEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_HMHIMHFJPEI_OFFSET))(this);
	}

	::System::Void HNHOBFJGFLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_HNHOBFJGFLJ_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONJMPCHELC_HFBPONNNLBA_OFFSET))(this);
	}

	static ::KONJMPCHELC* NJLLMPCDOEB()
	{
		return ((::KONJMPCHELC*(*)())((::PBYTE)hIl2Cpp + KONJMPCHELC_NJLLMPCDOEB_OFFSET))();
	}
};
