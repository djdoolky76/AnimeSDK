#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByWaveStageCount; }
namespace RPG::GameCore { class TaskContext; }

#define FDOLMCAJNLE_CTOR_OFFSET UNITYSDK_OFFSET(0x156E0C00)
#define FDOLMCAJNLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E0CE0)

inline static constexpr unsigned int FDOLMCAJNLE_TypeDefinitionIndex = 58540;

	class FDOLMCAJNLE
	{
	public:
		::RPG::GameCore::StringHash PMGNJJOCOPE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*))((::PBYTE)hIl2Cpp + FDOLMCAJNLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOLMCAJNLE_ONTASKBEGIN_OFFSET))(this);
		}

	};
