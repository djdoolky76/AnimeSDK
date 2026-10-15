#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReleaseEnvProfileForStory; }
namespace RPG::GameCore { class TaskContext; }

#define MCBGHPGHDAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB86CED0)
#define MCBGHPGHDAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86CEE0)
#define MCBGHPGHDAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86CF20)
#define MCBGHPGHDAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB86D190)
#define MCBGHPGHDAM_TICK_OFFSET UNITYSDK_OFFSET(0xB86D1E0)

inline static constexpr unsigned int MCBGHPGHDAM_TypeDefinitionIndex = 58381;

	class MCBGHPGHDAM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ReleaseEnvProfileForStory* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + MCBGHPGHDAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBGHPGHDAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBGHPGHDAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBGHPGHDAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCBGHPGHDAM_TICK_OFFSET))(this, a1);
		}

	};
