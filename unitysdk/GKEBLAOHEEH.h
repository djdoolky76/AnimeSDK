#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define GKEBLAOHEEH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x179F5050)
#define GKEBLAOHEEH__CTOR_OFFSET UNITYSDK_OFFSET(0x179F50F0)

inline static constexpr unsigned int GKEBLAOHEEH_TypeDefinitionIndex = 88211;

class GKEBLAOHEEH : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* CFINCJAEGEM; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* DPMALDPLIPA; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEBLAOHEEH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEBLAOHEEH_ONCREATEPROPERTY_OFFSET))(this);
	}
};
