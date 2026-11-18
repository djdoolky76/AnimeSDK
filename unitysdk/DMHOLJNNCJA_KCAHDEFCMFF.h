#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define DMHOLJNNCJA_KCAHDEFCMFF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x149BF700)
#define DMHOLJNNCJA_KCAHDEFCMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x149BF780)

inline static constexpr unsigned int DMHOLJNNCJA_KCAHDEFCMFF_TypeDefinitionIndex = 46956;

class DMHOLJNNCJA_KCAHDEFCMFF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* HHHAAFBACEB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_KCAHDEFCMFF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_KCAHDEFCMFF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
