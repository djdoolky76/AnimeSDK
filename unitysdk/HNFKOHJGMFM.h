#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class GDELLMFABIM;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HNFKOHJGMFM_BAFIFGDIMGB_OFFSET UNITYSDK_OFFSET(0x153816E0)
#define HNFKOHJGMFM_BMPEAFPNCID_OFFSET UNITYSDK_OFFSET(0x153814F0)
#define HNFKOHJGMFM_DCCPAKIKAPA_OFFSET UNITYSDK_OFFSET(0x15381170)
#define HNFKOHJGMFM_HAHNMJDFMCO_OFFSET UNITYSDK_OFFSET(0x15381490)
#define HNFKOHJGMFM_KMJBILGFIPN_OFFSET UNITYSDK_OFFSET(0x15381480)
#define HNFKOHJGMFM_OCOOJANBOOH_OFFSET UNITYSDK_OFFSET(0x153812A0)
#define HNFKOHJGMFM_OOJGCBDOIMN_OFFSET UNITYSDK_OFFSET(0x15381580)
#define HNFKOHJGMFM_PFAIGMPBHDP_OFFSET UNITYSDK_OFFSET(0x153814E0)
#define HNFKOHJGMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15381150)

inline static constexpr unsigned int HNFKOHJGMFM_TypeDefinitionIndex = 42984;

class HNFKOHJGMFM
{
public:
	::GDELLMFABIM* CGFAIPLMIFP; // 0x10
	::System::Boolean _FKLFKAPFNKC_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::Foundation::Coroutine::CoroutineHandle HGIJHODLIBC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM__CTOR_OFFSET))(this);
	}

	::System::Void DCCPAKIKAPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_DCCPAKIKAPA_OFFSET))(this);
	}

	::System::Void KMJBILGFIPN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_KMJBILGFIPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HAHNMJDFMCO(::GDELLMFABIM* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GDELLMFABIM*))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_HAHNMJDFMCO_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean PFAIGMPBHDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_PFAIGMPBHDP_OFFSET))(this);
	}

	::System::Void OCOOJANBOOH(::System::Boolean OAEJPPCLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_OCOOJANBOOH_OFFSET))(this, OAEJPPCLFJC);
	}

	::System::Void OOJGCBDOIMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_OOJGCBDOIMN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* BMPEAFPNCID(::System::Boolean OAEJPPCLFJC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_BMPEAFPNCID_OFFSET))(this, OAEJPPCLFJC);
	}

	::System::Void BAFIFGDIMGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_BAFIFGDIMGB_OFFSET))(this);
	}
};
