#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByHPMultiplier; }
namespace RPG::GameCore { class TaskContext; }

#define CKDNJNAHJOM_CTOR_OFFSET UNITYSDK_OFFSET(0xE092390)
#define CKDNJNAHJOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE092470)

inline static constexpr unsigned int CKDNJNAHJOM_TypeDefinitionIndex = 56903;

	class CKDNJNAHJOM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*))((::PBYTE)hIl2Cpp + CKDNJNAHJOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDNJNAHJOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
