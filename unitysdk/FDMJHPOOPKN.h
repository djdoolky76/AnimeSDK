#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSpecialSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define FDMJHPOOPKN_CTOR_OFFSET UNITYSDK_OFFSET(0x156D3490)
#define FDMJHPOOPKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156D34C0)

inline static constexpr unsigned int FDMJHPOOPKN_TypeDefinitionIndex = 54570;

	class FDMJHPOOPKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + FDMJHPOOPKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMJHPOOPKN_EVALUATE_OFFSET))(this);
		}

	};
