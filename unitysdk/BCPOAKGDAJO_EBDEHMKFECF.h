#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define BCPOAKGDAJO_EBDEHMKFECF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15068390)
#define BCPOAKGDAJO_EBDEHMKFECF__CTOR_OFFSET UNITYSDK_OFFSET(0x15068410)

inline static constexpr unsigned int BCPOAKGDAJO_EBDEHMKFECF_TypeDefinitionIndex = 57525;

class BCPOAKGDAJO_EBDEHMKFECF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* IJHEHDCKDGM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_EBDEHMKFECF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_EBDEHMKFECF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
