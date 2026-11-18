#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
template <typename T> class DBMAHDDGMHM_1;

#define JPHIKDAJDKB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12970710)
#define JPHIKDAJDKB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x129708D0)
#define JPHIKDAJDKB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x12970CD0)
#define JPHIKDAJDKB_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x129709A0)
#define JPHIKDAJDKB_NEMBMDDLPDM_OFFSET UNITYSDK_OFFSET(0x12970A30)
#define JPHIKDAJDKB_OMNKJPEHFEO_OFFSET UNITYSDK_OFFSET(0x12970930)
#define JPHIKDAJDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x12970C80)

inline static constexpr unsigned int JPHIKDAJDKB_TypeDefinitionIndex = 39410;

class JPHIKDAJDKB : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* ADNPFJMKDNM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHIKDAJDKB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OMNKJPEHFEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_OMNKJPEHFEO_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapPointWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NEMBMDDLPDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_NEMBMDDLPDM_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHIKDAJDKB_IFHNMAGGFAE_OFFSET))(this);
	}
};
