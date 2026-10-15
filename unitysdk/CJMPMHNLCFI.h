#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueBySkillMaxHitSplitCount; }
namespace RPG::GameCore { class TaskContext; }

#define CJMPMHNLCFI_CTOR_OFFSET UNITYSDK_OFFSET(0xD4CF8C0)
#define CJMPMHNLCFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD4CF9A0)

inline static constexpr unsigned int CJMPMHNLCFI_TypeDefinitionIndex = 55466;

	class CJMPMHNLCFI
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*))((::PBYTE)hIl2Cpp + CJMPMHNLCFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMPMHNLCFI_ONTASKBEGIN_OFFSET))(this);
		}

	};
