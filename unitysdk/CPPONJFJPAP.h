#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CPPONJFJPAP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F2310)
#define CPPONJFJPAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE8F2340)

inline static constexpr unsigned int CPPONJFJPAP_TypeDefinitionIndex = 54183;

	class CPPONJFJPAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*))((::PBYTE)hIl2Cpp + CPPONJFJPAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPONJFJPAP_ONTASKBEGIN_OFFSET))(this);
		}

	};
