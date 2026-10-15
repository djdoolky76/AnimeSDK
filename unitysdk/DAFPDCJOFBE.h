#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByCanPlanetFesSkillLevelUp; }
namespace RPG::GameCore { class TaskContext; }

#define DAFPDCJOFBE_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC2460)
#define DAFPDCJOFBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFC2490)

	class DAFPDCJOFBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + DAFPDCJOFBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFPDCJOFBE_EVALUATE_OFFSET))(this);
		}

	};
