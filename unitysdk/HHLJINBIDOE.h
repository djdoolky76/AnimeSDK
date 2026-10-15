#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropTryGetNiudanReward; }
namespace RPG::GameCore { class TaskContext; }

#define HHLJINBIDOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD1A30)
#define HHLJINBIDOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CD1A40)
#define HHLJINBIDOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD1B30)
#define HHLJINBIDOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CD1A80)
#define HHLJINBIDOE_TICK_OFFSET UNITYSDK_OFFSET(0x15CD1AD0)

inline static constexpr unsigned int HHLJINBIDOE_TypeDefinitionIndex = 58362;

	class HHLJINBIDOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropTryGetNiudanReward* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropTryGetNiudanReward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropTryGetNiudanReward*))((::PBYTE)hIl2Cpp + HHLJINBIDOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLJINBIDOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLJINBIDOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHLJINBIDOE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLJINBIDOE_ONTASKBEGIN_OFFSET))(this);
		}

	};
