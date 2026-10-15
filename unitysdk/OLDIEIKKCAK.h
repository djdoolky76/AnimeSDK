#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define OLDIEIKKCAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF026A0)
#define OLDIEIKKCAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF026D0)

inline static constexpr unsigned int OLDIEIKKCAK_TypeDefinitionIndex = 58152;

	class OLDIEIKKCAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideSummonUnit*))((::PBYTE)hIl2Cpp + OLDIEIKKCAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDIEIKKCAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
