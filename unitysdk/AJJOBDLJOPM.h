#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFEAPLNLNA.h"
#include "unitysdk/System/Object.h"

class CCGEIPFHBBP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJJOBDLJOPM_BEGJPHPHOPG_OFFSET UNITYSDK_OFFSET(0x16FF4030)
#define AJJOBDLJOPM_BPHKAOKFLLC_OFFSET UNITYSDK_OFFSET(0x16FF4040)
#define AJJOBDLJOPM_GFCBIAOGJGN_OFFSET UNITYSDK_OFFSET(0x16FF3FF0)
#define AJJOBDLJOPM_JCLNMFJAIBN_OFFSET UNITYSDK_OFFSET(0x16FF3FE0)
#define AJJOBDLJOPM_KBPJOFAIBHP_OFFSET UNITYSDK_OFFSET(0x16FF4010)
#define AJJOBDLJOPM_KIBHPMCJFBI_OFFSET UNITYSDK_OFFSET(0x16FF4000)
#define AJJOBDLJOPM_LHEIGDGCMJJ_OFFSET UNITYSDK_OFFSET(0x16FF3FD0)
#define AJJOBDLJOPM_MIEOIIMMBBO_OFFSET UNITYSDK_OFFSET(0x16FF4020)
#define AJJOBDLJOPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF3F40)

inline static constexpr unsigned int AJJOBDLJOPM_TypeDefinitionIndex = 87153;

class AJJOBDLJOPM : public ::System::Object
{
public:
	::CCGEIPFHBBP* _AABJLOLOOJF_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::DJFEAPLNLNA, ::System::Single>* _JKHGIMPOOPJ_k__BackingField; // 0x18
	::CCGEIPFHBBP* _AOGECJJDKOO_k__BackingField; // 0x20
	::CCGEIPFHBBP* _NIPOHBCAIDL_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBDLJOPM__CTOR_OFFSET))(this);
	}

	::System::Void LHEIGDGCMJJ(::CCGEIPFHBBP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CCGEIPFHBBP*))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_LHEIGDGCMJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::DJFEAPLNLNA, ::System::Single>* JCLNMFJAIBN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::DJFEAPLNLNA, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_JCLNMFJAIBN_OFFSET))(this);
	}

	::CCGEIPFHBBP* GFCBIAOGJGN()
	{
		return ((::CCGEIPFHBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_GFCBIAOGJGN_OFFSET))(this);
	}

	::System::Void KIBHPMCJFBI(::System::Collections::Generic::Dictionary_2<::DJFEAPLNLNA, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::DJFEAPLNLNA, ::System::Single>*))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_KIBHPMCJFBI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBPJOFAIBHP(::CCGEIPFHBBP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CCGEIPFHBBP*))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_KBPJOFAIBHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::CCGEIPFHBBP* MIEOIIMMBBO()
	{
		return ((::CCGEIPFHBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_MIEOIIMMBBO_OFFSET))(this);
	}

	::System::Void BEGJPHPHOPG(::CCGEIPFHBBP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CCGEIPFHBBP*))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_BEGJPHPHOPG_OFFSET))(this, EGEGIMGMJHN);
	}

	::CCGEIPFHBBP* BPHKAOKFLLC()
	{
		return ((::CCGEIPFHBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBDLJOPM_BPHKAOKFLLC_OFFSET))(this);
	}
};
