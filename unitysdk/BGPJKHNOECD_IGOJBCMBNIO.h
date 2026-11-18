#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGPJKHNOECD;
namespace System { class Action; }

#define BGPJKHNOECD_IGOJBCMBNIO_AFBCJACLDLP_OFFSET UNITYSDK_OFFSET(0xF7998F0)
#define BGPJKHNOECD_IGOJBCMBNIO__CTOR_OFFSET UNITYSDK_OFFSET(0xF7998E0)

inline static constexpr unsigned int BGPJKHNOECD_IGOJBCMBNIO_TypeDefinitionIndex = 79557;

class BGPJKHNOECD_IGOJBCMBNIO : public ::System::Object
{
public:
	::BGPJKHNOECD* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPJKHNOECD_IGOJBCMBNIO__CTOR_OFFSET))(this);
	}

	::System::Void AFBCJACLDLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPJKHNOECD_IGOJBCMBNIO_AFBCJACLDLP_OFFSET))(this);
	}
};
