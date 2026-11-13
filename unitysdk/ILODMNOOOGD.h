#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveHitByTimeRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define ILODMNOOOGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AF370)
#define ILODMNOOOGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5AF3A0)

inline static constexpr unsigned int ILODMNOOOGD_TypeDefinitionIndex = 54547;

	class ILODMNOOOGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + ILODMNOOOGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILODMNOOOGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
