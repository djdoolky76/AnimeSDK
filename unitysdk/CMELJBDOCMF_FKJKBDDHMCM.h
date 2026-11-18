#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CMELJBDOCMF_FKJKBDDHMCM_EKFBNHONEEJ_OFFSET UNITYSDK_OFFSET(0x19717070)
#define CMELJBDOCMF_FKJKBDDHMCM_GCGOGNPJLMD_OFFSET UNITYSDK_OFFSET(0x19717060)
#define CMELJBDOCMF_FKJKBDDHMCM_JMCGMELCMBF_OFFSET UNITYSDK_OFFSET(0x197171E0)
#define CMELJBDOCMF_FKJKBDDHMCM__CTOR_OFFSET UNITYSDK_OFFSET(0x19717050)

inline static constexpr unsigned int CMELJBDOCMF_FKJKBDDHMCM_TypeDefinitionIndex = 68857;

class CMELJBDOCMF_FKJKBDDHMCM : public ::System::Object
{
public:
	::UnityEngine::Material* AEIHFBNNLBP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* DNNLCPNBEJN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* LNFHEPAFJPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMELJBDOCMF_FKJKBDDHMCM__CTOR_OFFSET))(this);
	}

	::System::Void GCGOGNPJLMD(::System::String* MCOHLHMKLIP, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMELJBDOCMF_FKJKBDDHMCM_GCGOGNPJLMD_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Void EKFBNHONEEJ(::System::String* MCOHLHMKLIP, ::System::Boolean EGEGIMGMJHN, ::System::Boolean GIDPMBKHMIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CMELJBDOCMF_FKJKBDDHMCM_EKFBNHONEEJ_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, GIDPMBKHMIC);
	}

	::System::Void JMCGMELCMBF(::System::String* MCOHLHMKLIP, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMELJBDOCMF_FKJKBDDHMCM_JMCGMELCMBF_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}
};
