#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class CGBECAKCLFD;
class GHMGGIHEHJE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }

#define CGBECAKCLFD___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17840B90)
#define CGBECAKCLFD___C__DISPLAYCLASS32_0__FIRECAREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x17858D00)

inline static constexpr unsigned int CGBECAKCLFD___c__DisplayClass32_0_TypeDefinitionIndex = 78245;

	class CGBECAKCLFD___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::GHMGGIHEHJE* entity; // 0x10
		::RPG::Client::RoadRash::MonoRoadRashGameCar* monoCar; // 0x18
		::CGBECAKCLFD* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void _FireCarEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS32_0__FIRECAREFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
