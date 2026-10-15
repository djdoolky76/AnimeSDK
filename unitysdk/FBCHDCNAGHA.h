#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace RPG::GameCore { class TaskContext; }

#define FBCHDCNAGHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1568A250)
#define FBCHDCNAGHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1568A280)

inline static constexpr unsigned int FBCHDCNAGHA_TypeDefinitionIndex = 52133;

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
