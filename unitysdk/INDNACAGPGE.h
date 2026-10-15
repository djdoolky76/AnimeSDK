#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackStatusProbability; }
namespace RPG::GameCore { class TaskContext; }

#define INDNACAGPGE_CTOR_OFFSET UNITYSDK_OFFSET(0x164E89C0)
#define INDNACAGPGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164E89F0)

	class INDNACAGPGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusProbability* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusProbability*))((::PBYTE)hIl2Cpp + INDNACAGPGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDNACAGPGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
