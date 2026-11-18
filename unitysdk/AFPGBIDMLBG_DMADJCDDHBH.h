#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFPGBIDMLBG;
namespace UnityEngine { class AnimationCurve; }

#define AFPGBIDMLBG_DMADJCDDHBH_HDICKPEOHNK_OFFSET UNITYSDK_OFFSET(0x134C2620)
#define AFPGBIDMLBG_DMADJCDDHBH_IDMMGMPCOJI_OFFSET UNITYSDK_OFFSET(0x134C27E0)
#define AFPGBIDMLBG_DMADJCDDHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2610)

inline static constexpr unsigned int AFPGBIDMLBG_DMADJCDDHBH_TypeDefinitionIndex = 44040;

class AFPGBIDMLBG_DMADJCDDHBH : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* KGNCDHIMBME; // 0x10
	::AFPGBIDMLBG* KLHPEBKNIFB; // 0x18
	::System::Single IOJMEHCNGJA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_DMADJCDDHBH__CTOR_OFFSET))(this);
	}

	::System::Void HDICKPEOHNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_DMADJCDDHBH_HDICKPEOHNK_OFFSET))(this);
	}

	::System::Void IDMMGMPCOJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_DMADJCDDHBH_IDMMGMPCOJI_OFFSET))(this);
	}
};
