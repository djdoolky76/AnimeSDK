#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAnimatorSyncWithTimeLine; }
namespace RPG::GameCore { class TaskContext; }

#define INFHMIEOCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x164DE650)
#define INFHMIEOCGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164DE680)

inline static constexpr unsigned int INFHMIEOCGH_TypeDefinitionIndex = 55489;

	class INFHMIEOCGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*))((::PBYTE)hIl2Cpp + INFHMIEOCGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFHMIEOCGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
