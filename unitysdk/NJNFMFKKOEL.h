#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define NJNFMFKKOEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC509A30)
#define NJNFMFKKOEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC509A60)

inline static constexpr unsigned int NJNFMFKKOEL_TypeDefinitionIndex = 55740;

	class NJNFMFKKOEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + NJNFMFKKOEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNFMFKKOEL_EVALUATE_OFFSET))(this);
		}

	};
