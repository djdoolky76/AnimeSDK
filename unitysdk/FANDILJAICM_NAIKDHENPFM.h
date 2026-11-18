#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANDILJAICM;
namespace System { class Action; }

#define FANDILJAICM_NAIKDHENPFM_DDMJBEHFAMD_OFFSET UNITYSDK_OFFSET(0x10F52B30)
#define FANDILJAICM_NAIKDHENPFM_KAKPDOEMMAP_OFFSET UNITYSDK_OFFSET(0x10F52510)
#define FANDILJAICM_NAIKDHENPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F52500)

inline static constexpr unsigned int FANDILJAICM_NAIKDHENPFM_TypeDefinitionIndex = 68542;

class FANDILJAICM_NAIKDHENPFM : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::FANDILJAICM* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANDILJAICM_NAIKDHENPFM__CTOR_OFFSET))(this);
	}

	::System::Void KAKPDOEMMAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANDILJAICM_NAIKDHENPFM_KAKPDOEMMAP_OFFSET))(this);
	}

	::System::Void DDMJBEHFAMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANDILJAICM_NAIKDHENPFM_DDMJBEHFAMD_OFFSET))(this);
	}
};
