#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayBoomHit; }
namespace RPG::GameCore { class TaskContext; }

#define BHIGCFEECBB_CTOR_OFFSET UNITYSDK_OFFSET(0xB488BF0)
#define BHIGCFEECBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB488C20)

inline static constexpr unsigned int BHIGCFEECBB_TypeDefinitionIndex = 52541;

	class BHIGCFEECBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayBoomHit*))((::PBYTE)hIl2Cpp + BHIGCFEECBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIGCFEECBB_ONTASKBEGIN_OFFSET))(this);
		}

	};
