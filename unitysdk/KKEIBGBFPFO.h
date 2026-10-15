#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByValueEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define KKEIBGBFPFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BB5C0)
#define KKEIBGBFPFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4BB5F0)

inline static constexpr unsigned int KKEIBGBFPFO_TypeDefinitionIndex = 55477;

	class KKEIBGBFPFO
	{
	public:
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*))((::PBYTE)hIl2Cpp + KKEIBGBFPFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEIBGBFPFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
