#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;

#define LGNDPEKIIGJ_LLKFBHKIPCM_OFFSET UNITYSDK_OFFSET(0x11F0CA00)
#define LGNDPEKIIGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F0C9F0)

inline static constexpr unsigned int LGNDPEKIIGJ_TypeDefinitionIndex = 74355;

class LGNDPEKIIGJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNDPEKIIGJ__CTOR_OFFSET))(this);
	}

	static ::System::Boolean LLKFBHKIPCM(::MEKLIGLLJKM* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + LGNDPEKIIGJ_LLKFBHKIPCM_OFFSET))(IPMMCGDMODG);
	}
};
