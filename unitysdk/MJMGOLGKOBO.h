#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchUIMenuBGM; }
namespace RPG::GameCore { class TaskContext; }

#define MJMGOLGKOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3ADEB0)
#define MJMGOLGKOBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3ADEC0)
#define MJMGOLGKOBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3ADF00)
#define MJMGOLGKOBO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A3AE0D0)
#define MJMGOLGKOBO_TICK_OFFSET UNITYSDK_OFFSET(0x1A3AE120)

inline static constexpr unsigned int MJMGOLGKOBO_TypeDefinitionIndex = 60022;

	class MJMGOLGKOBO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchUIMenuBGM* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchUIMenuBGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchUIMenuBGM*))((::PBYTE)hIl2Cpp + MJMGOLGKOBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOLGKOBO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOLGKOBO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOLGKOBO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJMGOLGKOBO_TICK_OFFSET))(this, a1);
		}

	};
