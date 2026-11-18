#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NAEFGDAHEFE;
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define NAEFGDAHEFE_NMDEHGIFPPB_HMONNELLCMH_OFFSET UNITYSDK_OFFSET(0x170EFB30)
#define NAEFGDAHEFE_NMDEHGIFPPB_JIIPKLPMNEL_OFFSET UNITYSDK_OFFSET(0x170EFB10)
#define NAEFGDAHEFE_NMDEHGIFPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x170EFB00)

inline static constexpr unsigned int NAEFGDAHEFE_NMDEHGIFPPB_TypeDefinitionIndex = 81799;

class NAEFGDAHEFE_NMDEHGIFPPB : public ::System::Object
{
public:
	::NAEFGDAHEFE* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::UnityEngine::Animation* BKOLCDPOJAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_NMDEHGIFPPB__CTOR_OFFSET))(this);
	}

	::System::Void JIIPKLPMNEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_NMDEHGIFPPB_JIIPKLPMNEL_OFFSET))(this);
	}

	::System::Void HMONNELLCMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEFGDAHEFE_NMDEHGIFPPB_HMONNELLCMH_OFFSET))(this);
	}
};
