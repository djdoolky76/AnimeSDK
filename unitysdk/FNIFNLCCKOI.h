#pragma once
#include "unitysdk/unitysdk.h"
class NMAFJJJCPIM;
namespace RPG::GameCore { class TaskContext; }

#define FNIFNLCCKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15871780)
#define FNIFNLCCKOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158717B0)

	class FNIFNLCCKOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMAFJJJCPIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMAFJJJCPIM*))((::PBYTE)hIl2Cpp + FNIFNLCCKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFNLCCKOI_ONTASKBEGIN_OFFSET))(this);
		}

	};
