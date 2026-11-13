#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByAttackDamageData; }
namespace RPG::GameCore { class TaskContext; }

#define EJHJHNLGDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x19AAB550)
#define EJHJHNLGDCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AAB630)

inline static constexpr unsigned int EJHJHNLGDCE_TypeDefinitionIndex = 56591;

	class EJHJHNLGDCE
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*))((::PBYTE)hIl2Cpp + EJHJHNLGDCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHJHNLGDCE_ONTASKBEGIN_OFFSET))(this);
		}

	};
