#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchPropSceneObjClickHintAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define BKCANEOPGCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6474C0)
#define BKCANEOPGCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A6474F0)

inline static constexpr unsigned int BKCANEOPGCG_TypeDefinitionIndex = 54486;

	class BKCANEOPGCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*))((::PBYTE)hIl2Cpp + BKCANEOPGCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCANEOPGCG_ONTASKBEGIN_OFFSET))(this);
		}

	};
