#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSeriesID; }
namespace RPG::GameCore { class TaskContext; }

#define IHGJFEIICND_CTOR_OFFSET UNITYSDK_OFFSET(0x1641E650)
#define IHGJFEIICND_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1641E680)

inline static constexpr unsigned int IHGJFEIICND_TypeDefinitionIndex = 52591;

	class IHGJFEIICND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + IHGJFEIICND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGJFEIICND_EVALUATE_OFFSET))(this);
		}

	};
