#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareIsWolfBroPuzzleAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define AFFHDDKBMHH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0AF90)
#define AFFHDDKBMHH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF0AFC0)

	class AFFHDDKBMHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + AFFHDDKBMHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFHDDKBMHH_EVALUATE_OFFSET))(this);
		}

	};
