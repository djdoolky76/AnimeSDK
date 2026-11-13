#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByHealDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define DLNNDPONAMC_CTOR_OFFSET UNITYSDK_OFFSET(0x18688A50)
#define DLNNDPONAMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18688B30)

inline static constexpr unsigned int DLNNDPONAMC_TypeDefinitionIndex = 56636;

	class DLNNDPONAMC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + DLNNDPONAMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNNDPONAMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
