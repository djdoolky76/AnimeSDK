#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByScoringID; }
namespace RPG::GameCore { class TaskContext; }

#define AGOBHHJKMDH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3EC50)
#define AGOBHHJKMDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF3ED30)

inline static constexpr unsigned int AGOBHHJKMDH_TypeDefinitionIndex = 55464;

	class AGOBHHJKMDH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByScoringID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByScoringID*))((::PBYTE)hIl2Cpp + AGOBHHJKMDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBHHJKMDH_ONTASKBEGIN_OFFSET))(this);
		}

	};
