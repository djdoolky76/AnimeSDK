#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHMDBIMBNHF.h"
#include "unitysdk/System/Object.h"

class DMMBFLEPMMN;
class HGIDAMPAOGK;
class KEDDFGBJBPF;
class LOICBEJNBOB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAGJADOGKFB_BCKGCGOKOAC_OFFSET UNITYSDK_OFFSET(0x19736AE0)
#define DAGJADOGKFB_BLEMJNIMHJP_OFFSET UNITYSDK_OFFSET(0x19736B60)
#define DAGJADOGKFB_CHMPPDAJMBP_OFFSET UNITYSDK_OFFSET(0x19736A90)
#define DAGJADOGKFB_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x19736A30)
#define DAGJADOGKFB_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x19736600)
#define DAGJADOGKFB_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x19736AD0)
#define DAGJADOGKFB_LLIEHLDKNLG_OFFSET UNITYSDK_OFFSET(0x19736AB0)
#define DAGJADOGKFB_MDILHJEHOMI_OFFSET UNITYSDK_OFFSET(0x19736610)
#define DAGJADOGKFB_MGDGPECIGDH_OFFSET UNITYSDK_OFFSET(0x19736820)
#define DAGJADOGKFB_MPLCKDNDEHC_OFFSET UNITYSDK_OFFSET(0x19736B50)
#define DAGJADOGKFB__CTOR_OFFSET UNITYSDK_OFFSET(0x19736AF0)

inline static constexpr unsigned int DAGJADOGKFB_TypeDefinitionIndex = 44671;

class DAGJADOGKFB : public ::System::Object
{
public:
	::DMMBFLEPMMN* _OBFFIEHPCOP_k__BackingField; // 0x10
	::LOICBEJNBOB* _FAHNOENJLOK_k__BackingField; // 0x18
	::System::Boolean _MLMGDKLCIGA_k__BackingField; // 0x20

	::System::Void _ctor(::LOICBEJNBOB* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::LOICBEJNBOB*))((::PBYTE)hIl2Cpp + DAGJADOGKFB__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::LOICBEJNBOB* IBNCFMCGHFC()
	{
		return ((::LOICBEJNBOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_IBNCFMCGHFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KEDDFGBJBPF*>* MDILHJEHOMI()
	{
		return ((::System::Collections::Generic::List_1<::KEDDFGBJBPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_MDILHJEHOMI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HGIDAMPAOGK*>* MGDGPECIGDH()
	{
		return ((::System::Collections::Generic::List_1<::HGIDAMPAOGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_MGDGPECIGDH_OFFSET))(this);
	}

	::System::UInt32 DGFAJDNHCIJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_DGFAJDNHCIJ_OFFSET))(this);
	}

	::OHMDBIMBNHF CHMPPDAJMBP()
	{
		return ((::OHMDBIMBNHF(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_CHMPPDAJMBP_OFFSET))(this);
	}

	::System::Int32 LLIEHLDKNLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_LLIEHLDKNLG_OFFSET))(this);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Void BCKGCGOKOAC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAGJADOGKFB_BCKGCGOKOAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MPLCKDNDEHC(::LOICBEJNBOB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LOICBEJNBOB*))((::PBYTE)hIl2Cpp + DAGJADOGKFB_MPLCKDNDEHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::DMMBFLEPMMN* BLEMJNIMHJP()
	{
		return ((::DMMBFLEPMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGJADOGKFB_BLEMJNIMHJP_OFFSET))(this);
	}
};
