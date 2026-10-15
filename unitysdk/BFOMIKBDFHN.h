#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define BFOMIKBDFHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1731B0)
#define BFOMIKBDFHN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB1731E0)

inline static constexpr unsigned int BFOMIKBDFHN_TypeDefinitionIndex = 52087;

	class BFOMIKBDFHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + BFOMIKBDFHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOMIKBDFHN_EVALUATE_OFFSET))(this);
		}

	};
