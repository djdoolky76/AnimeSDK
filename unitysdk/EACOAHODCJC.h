#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/EACOAHODCJC_DPNHADHPJBG.h"
#include "unitysdk/EACOAHODCJC_JIENAGIBJOF.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EACOAHODCJC_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x17218CB0)
#define EACOAHODCJC_BFEJKEBMDEC_OFFSET UNITYSDK_OFFSET(0x172198E0)
#define EACOAHODCJC_BFGOIMKGIKL_OFFSET UNITYSDK_OFFSET(0x17218D80)
#define EACOAHODCJC_GFCNJHBOLEI_OFFSET UNITYSDK_OFFSET(0x17219F80)
#define EACOAHODCJC_HMLHFOJOPBD_OFFSET UNITYSDK_OFFSET(0x1721A120)
#define EACOAHODCJC_JICPIBBOLIO_OFFSET UNITYSDK_OFFSET(0x1721A130)
#define EACOAHODCJC_MBBIAKOCINH_OFFSET UNITYSDK_OFFSET(0x172197D0)
#define EACOAHODCJC_NPCILHGDALO_OFFSET UNITYSDK_OFFSET(0x1721A100)
#define EACOAHODCJC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17218C50)
#define EACOAHODCJC__CTOR_OFFSET UNITYSDK_OFFSET(0x17218C90)

inline static constexpr unsigned int EACOAHODCJC_TypeDefinitionIndex = 78258;

class EACOAHODCJC : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* MCNKGNMKDAN; // 0x88
	::System::Collections::Generic::List_1<::System::Object*>* MJKLCDMBPBF; // 0x90
	::System::Int32 AGKNFENCOLH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_ONCREATEPROPERTY_OFFSET))(this);
	}

	::EACOAHODCJC_JIENAGIBJOF BEDGKPELGOF(::System::Int32 NPAKMAGBOCH)
	{
		return ((::EACOAHODCJC_JIENAGIBJOF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EACOAHODCJC_BEDGKPELGOF_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Void MBBIAKOCINH(::System::Int32 PAEEEHKILOC, ::System::Boolean GAHOGMDCMEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EACOAHODCJC_MBBIAKOCINH_OFFSET))(this, PAEEEHKILOC, GAHOGMDCMEL);
	}

	::System::Void BFGOIMKGIKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_BFGOIMKGIKL_OFFSET))(this);
	}

	::System::Void GFCNJHBOLEI(::EACOAHODCJC_JIENAGIBJOF& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::EACOAHODCJC_JIENAGIBJOF&))((::PBYTE)hIl2Cpp + EACOAHODCJC_GFCNJHBOLEI_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Collections::Generic::List_1<::System::Object*>* NPCILHGDALO()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_NPCILHGDALO_OFFSET))(this);
	}

	::System::Int32 HMLHFOJOPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_HMLHFOJOPBD_OFFSET))(this);
	}

	::System::Boolean JICPIBBOLIO(::System::Int32 LDMLDJEOJHE, ::EACOAHODCJC_DPNHADHPJBG& IBLPHIILGHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EACOAHODCJC_DPNHADHPJBG&))((::PBYTE)hIl2Cpp + EACOAHODCJC_JICPIBBOLIO_OFFSET))(this, LDMLDJEOJHE, IBLPHIILGHE);
	}

	::System::Void BFEJKEBMDEC(::System::Int32 NPAKMAGBOCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EACOAHODCJC_BFEJKEBMDEC_OFFSET))(this, NPAKMAGBOCH);
	}
};
