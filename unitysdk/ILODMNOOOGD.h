#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveHitByTimeRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define ILODMNOOOGD_CTOR_OFFSET UNITYSDK_OFFSET(0x164BABE0)
#define ILODMNOOOGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164BAC10)

inline static constexpr unsigned int ILODMNOOOGD_TypeDefinitionIndex = 53385;

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
