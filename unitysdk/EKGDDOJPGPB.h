#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayBoomStart; }
namespace RPG::GameCore { class TaskContext; }

#define EKGDDOJPGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15505860)
#define EKGDDOJPGPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15505890)

inline static constexpr unsigned int EKGDDOJPGPB_TypeDefinitionIndex = 52542;

	class EKGDDOJPGPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayBoomStart*))((::PBYTE)hIl2Cpp + EKGDDOJPGPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGDDOJPGPB_ONTASKBEGIN_OFFSET))(this);
		}

	};
