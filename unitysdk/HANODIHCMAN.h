#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHJGMDOABJE.h"
#include "unitysdk/IGKOFMFKNNO.h"

namespace System { class String; }

#define HANODIHCMAN_CBLNPGLFIHM_OFFSET UNITYSDK_OFFSET(0x17AE4010)
#define HANODIHCMAN_ICLHHICGEDF_OFFSET UNITYSDK_OFFSET(0x17AE3F60)
#define HANODIHCMAN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17AE3F70)
#define HANODIHCMAN_JGMGFBLGKIJ_OFFSET UNITYSDK_OFFSET(0x17AE3FE0)
#define HANODIHCMAN_JIEEELAPDJM_OFFSET UNITYSDK_OFFSET(0x17AE4000)
#define HANODIHCMAN_MABICKGHEOO_OFFSET UNITYSDK_OFFSET(0x17AE4030)
#define HANODIHCMAN_NBLGBOKANOH_OFFSET UNITYSDK_OFFSET(0x17AE3FF0)
#define HANODIHCMAN_NHGPLOPHBMM_OFFSET UNITYSDK_OFFSET(0x17AE4020)
#define HANODIHCMAN_PNELLOJKGCI_OFFSET UNITYSDK_OFFSET(0x17AE4040)
#define HANODIHCMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE3F50)

inline static constexpr unsigned int HANODIHCMAN_TypeDefinitionIndex = 49261;

class HANODIHCMAN : public ::IGKOFMFKNNO
{
public:
	::System::String* _CACHBHADGCG_k__BackingField; // 0x10
	::System::String* _CDDMECKJNNI_k__BackingField; // 0x18
	::AHJGMDOABJE _CHOLMHICMMC_k__BackingField; // 0x20
	::System::Int32 _FFJFPEAKODE_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANODIHCMAN__CTOR_OFFSET))(this);
	}

	::System::Void ICLHHICGEDF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HANODIHCMAN_ICLHHICGEDF_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::HANODIHCMAN* JFDOOELFAOA()
	{
		return ((::HANODIHCMAN*(*)())((::PBYTE)hIl2Cpp + HANODIHCMAN_JFDOOELFAOA_OFFSET))();
	}

	::AHJGMDOABJE JGMGFBLGKIJ()
	{
		return ((::AHJGMDOABJE(*)(::PVOID))((::PBYTE)hIl2Cpp + HANODIHCMAN_JGMGFBLGKIJ_OFFSET))(this);
	}

	::System::Int32 NBLGBOKANOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANODIHCMAN_NBLGBOKANOH_OFFSET))(this);
	}

	::System::String* JIEEELAPDJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANODIHCMAN_JIEEELAPDJM_OFFSET))(this);
	}

	::System::Void CBLNPGLFIHM(::AHJGMDOABJE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AHJGMDOABJE))((::PBYTE)hIl2Cpp + HANODIHCMAN_CBLNPGLFIHM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NHGPLOPHBMM(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HANODIHCMAN_NHGPLOPHBMM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MABICKGHEOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANODIHCMAN_MABICKGHEOO_OFFSET))(this);
	}

	::System::Void PNELLOJKGCI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HANODIHCMAN_PNELLOJKGCI_OFFSET))(this, EGEGIMGMJHN);
	}
};
