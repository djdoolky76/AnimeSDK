#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class OHDHGHEIFAI;
template <typename T> class LJHFMILANJA_1;

#define BEPFDOLAHEB_NKCKMEMKLCO_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18668090)
#define BEPFDOLAHEB_NKCKMEMKLCO__CTOR_OFFSET UNITYSDK_OFFSET(0x18668110)

inline static constexpr unsigned int BEPFDOLAHEB_NKCKMEMKLCO_TypeDefinitionIndex = 39534;

class BEPFDOLAHEB_NKCKMEMKLCO : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::OHDHGHEIFAI*>* MOEINOFCEFD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFDOLAHEB_NKCKMEMKLCO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFDOLAHEB_NKCKMEMKLCO_ONCREATEPROPERTY_OFFSET))(this);
	}
};
