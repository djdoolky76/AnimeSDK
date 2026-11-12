#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SyncMonsterLightByCameraDir; }
namespace RPG::GameCore { class TaskContext; }

#define KJFAJGKAFNP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDFAF0)
#define KJFAJGKAFNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCDFB00)
#define KJFAJGKAFNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCDFB40)
#define KJFAJGKAFNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCDFDD0)
#define KJFAJGKAFNP_TICK_OFFSET UNITYSDK_OFFSET(0xBCDFE20)

inline static constexpr unsigned int KJFAJGKAFNP_TypeDefinitionIndex = 60031;

	class KJFAJGKAFNP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SyncMonsterLightByCameraDir* OFKGLJOAMLD; // 0x20
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
