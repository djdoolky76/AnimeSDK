#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBtnBattleHintInfo; }
namespace RPG::GameCore { class TaskContext; }

#define FHIGIBPPOPO_CTOR_OFFSET UNITYSDK_OFFSET(0x18AAA120)
#define FHIGIBPPOPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AAA150)

inline static constexpr unsigned int FHIGIBPPOPO_TypeDefinitionIndex = 56545;

	class FHIGIBPPOPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBtnBattleHintInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + FHIGIBPPOPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIGIBPPOPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
