#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PDHABCFCJCL;

#define ALEEGFIOCLK_AECOMPFJFCE_IFKEKLGMOHH_OFFSET UNITYSDK_OFFSET(0x1E71B450)
#define ALEEGFIOCLK_AECOMPFJFCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71B440)

inline static constexpr unsigned int ALEEGFIOCLK_AECOMPFJFCE_TypeDefinitionIndex = 93433;

class ALEEGFIOCLK_AECOMPFJFCE : public ::System::Object
{
public:
	::PDHABCFCJCL* BOLJBDENNOD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_AECOMPFJFCE__CTOR_OFFSET))(this);
	}

	::System::Void IFKEKLGMOHH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_AECOMPFJFCE_IFKEKLGMOHH_OFFSET))(this, MGMDLMBEDJF);
	}
};
