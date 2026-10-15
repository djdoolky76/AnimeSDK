#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByCurrentBP; }
namespace RPG::GameCore { class TaskContext; }

#define GFEICIHGENM_CTOR_OFFSET UNITYSDK_OFFSET(0x159E1980)
#define GFEICIHGENM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159E1A60)

inline static constexpr unsigned int GFEICIHGENM_TypeDefinitionIndex = 55426;

	class GFEICIHGENM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCurrentBP*))((::PBYTE)hIl2Cpp + GFEICIHGENM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEICIHGENM_ONTASKBEGIN_OFFSET))(this);
		}

	};
