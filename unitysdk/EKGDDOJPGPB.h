#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayBoomStart; }
namespace RPG::GameCore { class TaskContext; }

#define EKGDDOJPGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1998F0A0)
#define EKGDDOJPGPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1998F0D0)

inline static constexpr unsigned int EKGDDOJPGPB_TypeDefinitionIndex = 53648;

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
