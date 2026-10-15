#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCasterAliveOrLimbo; }
namespace RPG::GameCore { class TaskContext; }

#define PFECBAEKKDH_CTOR_OFFSET UNITYSDK_OFFSET(0xC20B1C0)
#define PFECBAEKKDH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC20B1F0)

inline static constexpr unsigned int PFECBAEKKDH_TypeDefinitionIndex = 54881;

	class PFECBAEKKDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + PFECBAEKKDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECBAEKKDH_EVALUATE_OFFSET))(this);
		}

	};
