#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundHit; }

#define NLMALFMPJCG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6B230)
#define NLMALFMPJCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC6B260)

inline static constexpr unsigned int NLMALFMPJCG_TypeDefinitionIndex = 56469;

	class NLMALFMPJCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundHit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundHit*))((::PBYTE)hIl2Cpp + NLMALFMPJCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMALFMPJCG_ONTASKBEGIN_OFFSET))(this);
		}

	};
