#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLineupAvatarHpRatio; }
namespace RPG::GameCore { class TaskContext; }

#define NGHOAENDCPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA7F00)
#define NGHOAENDCPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBA7F30)

	class NGHOAENDCPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + NGHOAENDCPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOAENDCPM_EVALUATE_OFFSET))(this);
		}

	};
