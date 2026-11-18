#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/Nullable_1.h"

class KOGPMKOGCLC;
template <typename T> class LJHFMILANJA_1;

#define NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_IGINBDNJONG_OFFSET UNITYSDK_OFFSET(0xE1AAC20)
#define NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_KFGPGLPDMKF_OFFSET UNITYSDK_OFFSET(0xE1AAC30)
#define NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE1AABA0)
#define NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AAB90)

inline static constexpr unsigned int NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_TypeDefinitionIndex = 85520;

class NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* _LBMNPMCMFPE_k__BackingField; // 0x88

	::System::Void _ctor(::KOGPMKOGCLC* GAOLLJICJEA)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB__CTOR_OFFSET))(this, GAOLLJICJEA);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void IGINBDNJONG(::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>*))((::PBYTE)hIl2Cpp + NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_IGINBDNJONG_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* KFGPGLPDMKF()
	{
		return ((::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLBJPOGJLP_DPEHMGLEPJC_FKAIAFBOMNB_KFGPGLPDMKF_OFFSET))(this);
	}
};
