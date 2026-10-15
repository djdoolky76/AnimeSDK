#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace RPG::GameCore { class TaskContext; }

#define FBCHDCNAGHA_CTOR_OFFSET UNITYSDK_OFFSET(0x15696070)
#define FBCHDCNAGHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156960A0)

	class FBCHDCNAGHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + FBCHDCNAGHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCHDCNAGHA_EVALUATE_OFFSET))(this);
		}

	};
