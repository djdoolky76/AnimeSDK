#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define JAJHAJEHPON_NFDMFLKLMCG_CIBDEJCOOLO_OFFSET UNITYSDK_OFFSET(0x14A3F650)
#define JAJHAJEHPON_NFDMFLKLMCG_DDAIFDLNEKM_OFFSET UNITYSDK_OFFSET(0x14A3F660)
#define JAJHAJEHPON_NFDMFLKLMCG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14A3F5C0)
#define JAJHAJEHPON_NFDMFLKLMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3F640)

inline static constexpr unsigned int JAJHAJEHPON_NFDMFLKLMCG_TypeDefinitionIndex = 55486;

class JAJHAJEHPON_NFDMFLKLMCG : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* _ILHKMCLAEPL_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_NFDMFLKLMCG__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_NFDMFLKLMCG_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void CIBDEJCOOLO(::LJHFMILANJA_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_NFDMFLKLMCG_CIBDEJCOOLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Boolean>* DDAIFDLNEKM()
	{
		return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_NFDMFLKLMCG_DDAIFDLNEKM_OFFSET))(this);
	}
};
