#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace System { class String; }
template <typename T> class KLIOMMIOFDC_1;

#define LFKIIKGGMIN_BOEJCDPACFE_OFFSET UNITYSDK_OFFSET(0x1A308E70)
#define LFKIIKGGMIN_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x1A308E30)
#define LFKIIKGGMIN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A308D30)
#define LFKIIKGGMIN_JIHAFEGMOPI_OFFSET UNITYSDK_OFFSET(0x1A308E50)
#define LFKIIKGGMIN_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1A308E40)
#define LFKIIKGGMIN_MIGIDIFMKIO_OFFSET UNITYSDK_OFFSET(0x1A308E60)
#define LFKIIKGGMIN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A308D40)
#define LFKIIKGGMIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A308E20)

inline static constexpr unsigned int LFKIIKGGMIN_TypeDefinitionIndex = 66139;

class LFKIIKGGMIN : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::System::String*>* _EMFNGPCECMO_k__BackingField; // 0x88
	::KLIOMMIOFDC_1<::System::String*>* _BLBIAMKGHJL_k__BackingField; // 0x90
	::KLIOMMIOFDC_1<::MoleMole::UI::FlowerShop::ESlotType>* _KPEFMNNHGBM_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKIIKGGMIN__CTOR_OFFSET))(this);
	}

	::KLIOMMIOFDC_1<::System::String*>* get_Name()
	{
		return ((::KLIOMMIOFDC_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_GET_NAME_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_ONCREATEPROPERTY_OFFSET))(this);
	}

	::KLIOMMIOFDC_1<::System::String*>* ELPFAFFJNKI()
	{
		return ((::KLIOMMIOFDC_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::KLIOMMIOFDC_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::System::String*>*))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JIHAFEGMOPI(::KLIOMMIOFDC_1<::MoleMole::UI::FlowerShop::ESlotType>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::MoleMole::UI::FlowerShop::ESlotType>*))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_JIHAFEGMOPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MIGIDIFMKIO(::KLIOMMIOFDC_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::System::String*>*))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_MIGIDIFMKIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::KLIOMMIOFDC_1<::MoleMole::UI::FlowerShop::ESlotType>* BOEJCDPACFE()
	{
		return ((::KLIOMMIOFDC_1<::MoleMole::UI::FlowerShop::ESlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKIIKGGMIN_BOEJCDPACFE_OFFSET))(this);
	}
};
