#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SyncMonsterLightByCameraDir; }
namespace RPG::GameCore { class TaskContext; }

#define KJFAJGKAFNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB448D40)
#define KJFAJGKAFNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB448D50)
#define KJFAJGKAFNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB448D90)
#define KJFAJGKAFNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB449020)
#define KJFAJGKAFNP_TICK_OFFSET UNITYSDK_OFFSET(0xB449070)

inline static constexpr unsigned int KJFAJGKAFNP_TypeDefinitionIndex = 58763;

	class KJFAJGKAFNP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SyncMonsterLightByCameraDir* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncMonsterLightByCameraDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncMonsterLightByCameraDir*))((::PBYTE)hIl2Cpp + KJFAJGKAFNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAJGKAFNP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAJGKAFNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAJGKAFNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJFAJGKAFNP_TICK_OFFSET))(this, a1);
		}

	};
