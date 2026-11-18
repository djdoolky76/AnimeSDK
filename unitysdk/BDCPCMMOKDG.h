#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define BDCPCMMOKDG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1854D520)
#define BDCPCMMOKDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1854D5C0)

inline static constexpr unsigned int BDCPCMMOKDG_TypeDefinitionIndex = 87049;

class BDCPCMMOKDG : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int32>* APKIKLPPHEA; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* ADNPFJMKDNM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCPCMMOKDG__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCPCMMOKDG_ONCREATEPROPERTY_OFFSET))(this);
	}
};
