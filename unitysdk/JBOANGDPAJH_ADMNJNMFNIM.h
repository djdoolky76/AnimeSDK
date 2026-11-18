#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBOANGDPAJH_KPIMEKJKNIE;

#define JBOANGDPAJH_ADMNJNMFNIM_IKLNPEKFKEO_OFFSET UNITYSDK_OFFSET(0x18727510)
#define JBOANGDPAJH_ADMNJNMFNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18727500)

inline static constexpr unsigned int JBOANGDPAJH_ADMNJNMFNIM_TypeDefinitionIndex = 45616;

class JBOANGDPAJH_ADMNJNMFNIM : public ::System::Object
{
public:
	::JBOANGDPAJH_KPIMEKJKNIE* FGBNBFHOKAA; // 0x10
	::System::Int32 NLKNCDJOFGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_ADMNJNMFNIM__CTOR_OFFSET))(this);
	}

	::System::Void IKLNPEKFKEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_ADMNJNMFNIM_IKLNPEKFKEO_OFFSET))(this);
	}
};
