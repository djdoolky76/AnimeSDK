#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ScreenPPEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DIDDLGLOHNF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEAF80)
#define DIDDLGLOHNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEB090)
#define DIDDLGLOHNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEAF90)
#define DIDDLGLOHNF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBEAFE0)
#define DIDDLGLOHNF_TICK_OFFSET UNITYSDK_OFFSET(0xEBEB030)

inline static constexpr unsigned int DIDDLGLOHNF_TypeDefinitionIndex = 56389;

	class DIDDLGLOHNF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ScreenPPEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScreenPPEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScreenPPEffect*))((::PBYTE)hIl2Cpp + DIDDLGLOHNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDLGLOHNF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDLGLOHNF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIDDLGLOHNF_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDLGLOHNF_DISPOSE_OFFSET))(this);
		}

	};
