#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABBKMNDDOLL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDFOAKLDDFK_ACMDKCDEFOO_OFFSET UNITYSDK_OFFSET(0x1D0C2660)
#define NDFOAKLDDFK_BCAIOKLJOPN_OFFSET UNITYSDK_OFFSET(0x1D0C2D90)
#define NDFOAKLDDFK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0C2770)
#define NDFOAKLDDFK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0C2FE0)
#define NDFOAKLDDFK_HGDLMOMPCLP_OFFSET UNITYSDK_OFFSET(0x1D0C2C70)
#define NDFOAKLDDFK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0C2D80)
#define NDFOAKLDDFK_LNBBPIDEKPD_OFFSET UNITYSDK_OFFSET(0x1D0C2860)
#define NDFOAKLDDFK_MNFPCLACCDF_OFFSET UNITYSDK_OFFSET(0x1D0C29A0)
#define NDFOAKLDDFK_OIEACHNNPKH_OFFSET UNITYSDK_OFFSET(0x1D0C2ED0)
#define NDFOAKLDDFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2650)

inline static constexpr unsigned int NDFOAKLDDFK_TypeDefinitionIndex = 11959;

class NDFOAKLDDFK : public ::System::Object
{
public:
	::ABBKMNDDOLL HBDPAIKANDB; // 0x10
	::System::String* BEMNJNBIOJC; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* ONDDHEOGJDC; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BEBGHKKCGCG; // 0x38
	::System::String* AFHHFMLHFAN; // 0x40
	::System::Int32 FFBIDKPPFFG; // 0x48
	::System::Int32 BCJDMEIJKJI; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52

	::System::Void _ctor(::ABBKMNDDOLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ABBKMNDDOLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NDFOAKLDDFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ACMDKCDEFOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_ACMDKCDEFOO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LNBBPIDEKPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_LNBBPIDEKPD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MNFPCLACCDF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_MNFPCLACCDF_OFFSET))(this);
	}

	::System::String* HGDLMOMPCLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_HGDLMOMPCLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BCAIOKLJOPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_BCAIOKLJOPN_OFFSET))(this);
	}

	::System::String* OIEACHNNPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_OIEACHNNPKH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDFOAKLDDFK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
