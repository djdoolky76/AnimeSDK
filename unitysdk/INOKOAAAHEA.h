#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsEnableNegativeHP; }
namespace RPG::GameCore { class TaskContext; }

#define INOKOAAAHEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F8BB0)
#define INOKOAAAHEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A5F8BE0)

inline static constexpr unsigned int INOKOAAAHEA_TypeDefinitionIndex = 56192;

	class INOKOAAAHEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + INOKOAAAHEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INOKOAAAHEA_EVALUATE_OFFSET))(this);
		}

	};
