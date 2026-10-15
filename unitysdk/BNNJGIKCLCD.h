#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReplaceCharacterEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define BNNJGIKCLCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDEB20)
#define BNNJGIKCLCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDDEB50)

inline static constexpr unsigned int BNNJGIKCLCD_TypeDefinitionIndex = 55882;

	class BNNJGIKCLCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReplaceCharacterEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReplaceCharacterEmotion*))((::PBYTE)hIl2Cpp + BNNJGIKCLCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNJGIKCLCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
