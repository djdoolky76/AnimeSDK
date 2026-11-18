#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace UnityEngine { class AnimationCurve; }

#define FGCOIBFFCHB_JCOFFEHMKAH_BEEOJHEIMPC_OFFSET UNITYSDK_OFFSET(0xBB41B40)
#define FGCOIBFFCHB_JCOFFEHMKAH_PGCKCPHLHDH_OFFSET UNITYSDK_OFFSET(0xBB41BC0)
#define FGCOIBFFCHB_JCOFFEHMKAH__CTOR_OFFSET UNITYSDK_OFFSET(0xBB41B30)

inline static constexpr unsigned int FGCOIBFFCHB_JCOFFEHMKAH_TypeDefinitionIndex = 49057;

class FGCOIBFFCHB_JCOFFEHMKAH : public ::System::Object
{
public:
	::FGCOIBFFCHB* KLHPEBKNIFB; // 0x10
	::UnityEngine::AnimationCurve* PEMMIFBIBNC; // 0x18
	::System::Single PFGFJHDGIAG; // 0x20
	::System::Single EKGMLLJEJHM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_JCOFFEHMKAH__CTOR_OFFSET))(this);
	}

	::System::Void BEEOJHEIMPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_JCOFFEHMKAH_BEEOJHEIMPC_OFFSET))(this);
	}

	::System::Void PGCKCPHLHDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_JCOFFEHMKAH_PGCKCPHLHDH_OFFSET))(this);
	}
};
