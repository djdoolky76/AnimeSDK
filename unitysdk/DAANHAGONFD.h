#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorCustomStringV2; }
namespace RPG::GameCore { class TaskContext; }

#define DAANHAGONFD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB0A60)
#define DAANHAGONFD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFB0A90)

inline static constexpr unsigned int DAANHAGONFD_TypeDefinitionIndex = 52561;

	class DAANHAGONFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + DAANHAGONFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAANHAGONFD_EVALUATE_OFFSET))(this);
		}

	};
