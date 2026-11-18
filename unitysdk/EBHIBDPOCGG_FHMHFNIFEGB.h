#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;

#define EBHIBDPOCGG_FHMHFNIFEGB_HBIFJBMOFMJ_OFFSET UNITYSDK_OFFSET(0x19518DD0)
#define EBHIBDPOCGG_FHMHFNIFEGB__CTOR_OFFSET UNITYSDK_OFFSET(0x19518DC0)

inline static constexpr unsigned int EBHIBDPOCGG_FHMHFNIFEGB_TypeDefinitionIndex = 10418;

class EBHIBDPOCGG_FHMHFNIFEGB : public ::System::Object
{
public:
	::Share::EAvatarSkillType OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_FHMHFNIFEGB__CTOR_OFFSET))(this);
	}

	::System::Boolean HBIFJBMOFMJ(::BPDOBLDMEGB* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_FHMHFNIFEGB_HBIFJBMOFMJ_OFFSET))(this, HEAJMIGHEHG);
	}
};
