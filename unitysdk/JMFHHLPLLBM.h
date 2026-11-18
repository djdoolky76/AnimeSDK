#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IBENDELLLAO;
class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace System { class Object; }
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define JMFHHLPLLBM_AHGIPNGDJGC_OFFSET UNITYSDK_OFFSET(0x14FC3630)
#define JMFHHLPLLBM_BABCFMCMIAB_OFFSET UNITYSDK_OFFSET(0x14FC3B10)
#define JMFHHLPLLBM_DKIBBNCFENG_OFFSET UNITYSDK_OFFSET(0x14FC3210)
#define JMFHHLPLLBM_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x14FC3DC0)
#define JMFHHLPLLBM_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14FC2B50)
#define JMFHHLPLLBM_FDGNAGIJNIF_OFFSET UNITYSDK_OFFSET(0x14FC37D0)
#define JMFHHLPLLBM_FKPOANIFJKG_OFFSET UNITYSDK_OFFSET(0x14FC3F60)
#define JMFHHLPLLBM_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x14FC3970)
#define JMFHHLPLLBM_MDOFAMFNBGB_OFFSET UNITYSDK_OFFSET(0x14FC35E0)
#define JMFHHLPLLBM_PBGBKBBGGAC_OFFSET UNITYSDK_OFFSET(0x14FC3610)
#define JMFHHLPLLBM__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC31C0)

inline static constexpr unsigned int JMFHHLPLLBM_TypeDefinitionIndex = 76435;

class JMFHHLPLLBM : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Object*>* NNJANOEGGFO; // 0x50
	::BFMLEHMAGAK_1<::System::Boolean>* NNODPKAMILC; // 0x58
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean DKIBBNCFENG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_DKIBBNCFENG_OFFSET))(this);
	}

	::System::Boolean MDOFAMFNBGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_MDOFAMFNBGB_OFFSET))(this);
	}

	::System::Boolean PBGBKBBGGAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_PBGBKBBGGAC_OFFSET))(this);
	}

	::System::Boolean AHGIPNGDJGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_AHGIPNGDJGC_OFFSET))(this);
	}

	::System::Boolean FDGNAGIJNIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_FDGNAGIJNIF_OFFSET))(this);
	}

	::System::Boolean FNKFPOGMBLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_FNKFPOGMBLB_OFFSET))(this);
	}

	::System::String* BABCFMCMIAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_BABCFMCMIAB_OFFSET))(this);
	}

	::System::Boolean DONDKEFJMGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_DONDKEFJMGI_OFFSET))(this);
	}

	::IBENDELLLAO* FKPOANIFJKG()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFHHLPLLBM_FKPOANIFJKG_OFFSET))(this);
	}
};
