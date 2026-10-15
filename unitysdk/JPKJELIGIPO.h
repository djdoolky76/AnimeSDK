#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByElationTimeSkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define JPKJELIGIPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C8790)
#define JPKJELIGIPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2C8870)

inline static constexpr unsigned int JPKJELIGIPO_TypeDefinitionIndex = 55431;

	class JPKJELIGIPO
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*))((::PBYTE)hIl2Cpp + JPKJELIGIPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKJELIGIPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
