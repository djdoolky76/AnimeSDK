#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByAttackTargetCount; }
namespace RPG::GameCore { class TaskContext; }

#define KCLNMDFJOLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB33D9D0)
#define KCLNMDFJOLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB33DAB0)

inline static constexpr unsigned int KCLNMDFJOLJ_TypeDefinitionIndex = 55421;

	class KCLNMDFJOLJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + KCLNMDFJOLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLNMDFJOLJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
