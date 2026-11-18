#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/NPPIIJMBPCA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJEBAPLAKCP_AGEGPGEEIKH_OFFSET UNITYSDK_OFFSET(0x16D8ACC0)
#define AJEBAPLAKCP_AKOACLEPNAE_OFFSET UNITYSDK_OFFSET(0x16D8ACD0)
#define AJEBAPLAKCP_FKOGHLLJDNB_OFFSET UNITYSDK_OFFSET(0x16D8ACF0)
#define AJEBAPLAKCP_FPGHDJNDHGB_OFFSET UNITYSDK_OFFSET(0x16D8AD00)
#define AJEBAPLAKCP_JFDGFDAACPE_OFFSET UNITYSDK_OFFSET(0x16D8ACE0)
#define AJEBAPLAKCP_OKJLBAEAEDM_OFFSET UNITYSDK_OFFSET(0x16D8AD10)
#define AJEBAPLAKCP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8ACB0)

inline static constexpr unsigned int AJEBAPLAKCP_TypeDefinitionIndex = 57228;

class AJEBAPLAKCP : public ::System::Object
{
public:
	::System::String* _BLKLECANAGA_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::NPPIIJMBPCA>* _FLKEJOMKCBK_k__BackingField; // 0x18
	::BDEHNBMOHMG _HKDPDFNJPCP_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEBAPLAKCP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::NPPIIJMBPCA>* AGEGPGEEIKH()
	{
		return ((::System::Collections::Generic::List_1<::NPPIIJMBPCA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_AGEGPGEEIKH_OFFSET))(this);
	}

	::System::String* AKOACLEPNAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_AKOACLEPNAE_OFFSET))(this);
	}

	::System::Void JFDGFDAACPE(::BDEHNBMOHMG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BDEHNBMOHMG))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_JFDGFDAACPE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FKOGHLLJDNB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_FKOGHLLJDNB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FPGHDJNDHGB(::System::Collections::Generic::List_1<::NPPIIJMBPCA>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPPIIJMBPCA>*))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_FPGHDJNDHGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::BDEHNBMOHMG OKJLBAEAEDM()
	{
		return ((::BDEHNBMOHMG(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEBAPLAKCP_OKJLBAEAEDM_OFFSET))(this);
	}
};
