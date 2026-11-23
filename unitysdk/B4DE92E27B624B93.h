#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E929FA53A44FFF06;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }

#define B4DE92E27B624B93_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1844750)
#define B4DE92E27B624B93_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x18446C0)
#define B4DE92E27B624B93__CTOR_OFFSET UNITYSDK_OFFSET(0x18448C0)

inline static constexpr unsigned int B4DE92E27B624B93_TypeDefinitionIndex = 1231;

class B4DE92E27B624B93 : public ::System::Object
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x10
	::UnityEngine::GameObject* A5F281517F42CAE9; // 0x18
	::ABC::UI::MonoLocalizedTmp* ED5CF5574A2EF3E0; // 0x20
	::ABC::UI::MonoLocalizedTmp* F7C93D7E069F5E49; // 0x28
	::UnityEngine::GameObject* B35B5FAC247C3B76; // 0x30

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4DE92E27B624B93_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::E929FA53A44FFF06* B1C2F2D6F91482EE, ::System::Boolean B8899B44AB42024A)
	{
		return ((::System::Void(*)(::PVOID, ::E929FA53A44FFF06*, ::System::Boolean))((::PBYTE)hIl2Cpp + B4DE92E27B624B93_EC3033C0485522FB_OFFSET))(this, B1C2F2D6F91482EE, B8899B44AB42024A);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*))((::PBYTE)hIl2Cpp + B4DE92E27B624B93__CTOR_OFFSET))(this, E6305B8DDD56CFBC);
	}
};
