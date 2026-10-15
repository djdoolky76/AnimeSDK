#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceCurrentHeartDialNPC; }

#define PEPBOMOMFNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EFED0)
#define PEPBOMOMFNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1EFEE0)
#define PEPBOMOMFNP_OFKLJDJPHHH_OFFSET UNITYSDK_OFFSET(0xC1F0240)
#define PEPBOMOMFNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1EFF20)
#define PEPBOMOMFNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1F0410)
#define PEPBOMOMFNP_TICK_OFFSET UNITYSDK_OFFSET(0xC1F0460)

inline static constexpr unsigned int PEPBOMOMFNP_TypeDefinitionIndex = 53410;

	class PEPBOMOMFNP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TraceCurrentHeartDialNPC* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_TICK_OFFSET))(this, a1);
		}

		::System::Void OFKLJDJPHHH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapNpcDef* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEPBOMOMFNP_OFKLJDJPHHH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
