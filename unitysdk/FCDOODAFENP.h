#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCompareEnhancedID; }
namespace RPG::GameCore { class TaskContext; }

#define FCDOODAFENP_CTOR_OFFSET UNITYSDK_OFFSET(0x156B6E90)
#define FCDOODAFENP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156B6EC0)

inline static constexpr unsigned int FCDOODAFENP_TypeDefinitionIndex = 53110;

	class FCDOODAFENP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + FCDOODAFENP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDOODAFENP_EVALUATE_OFFSET))(this);
		}

	};
