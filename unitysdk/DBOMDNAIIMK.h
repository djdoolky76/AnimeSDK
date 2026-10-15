#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GlobalMainIntensityEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DBOMDNAIIMK_CTOR_OFFSET UNITYSDK_OFFSET(0xE234440)
#define DBOMDNAIIMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE234D20)
#define DBOMDNAIIMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE234450)
#define DBOMDNAIIMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE234C70)
#define DBOMDNAIIMK_TICK_OFFSET UNITYSDK_OFFSET(0xE234CC0)

inline static constexpr unsigned int DBOMDNAIIMK_TypeDefinitionIndex = 56362;

	class DBOMDNAIIMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GlobalMainIntensityEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalMainIntensityEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalMainIntensityEffect*))((::PBYTE)hIl2Cpp + DBOMDNAIIMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMDNAIIMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMDNAIIMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBOMDNAIIMK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMDNAIIMK_DISPOSE_OFFSET))(this);
		}

	};
