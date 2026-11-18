#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LGFJMNEABJP_1;

#define BPJEPJAJMPN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x150AA000)
#define BPJEPJAJMPN__CTOR_OFFSET UNITYSDK_OFFSET(0x150AA080)

inline static constexpr unsigned int BPJEPJAJMPN_TypeDefinitionIndex = 46381;

class BPJEPJAJMPN : public ::JJEJBPGJPJN
{
public:
	::LGFJMNEABJP_1<::System::Int32>* HIADJDLCFOC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJEPJAJMPN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJEPJAJMPN_ONCREATEPROPERTY_OFFSET))(this);
	}
};
