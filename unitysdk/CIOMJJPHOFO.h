#pragma once
#include "unitysdk/unitysdk.h"
class GJMAAIHEABO;
namespace RPG::GameCore { class TaskContext; }

#define CIOMJJPHOFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF88920)
#define CIOMJJPHOFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF88950)

inline static constexpr unsigned int CIOMJJPHOFO_TypeDefinitionIndex = 58732;

	class CIOMJJPHOFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJMAAIHEABO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJMAAIHEABO*))((::PBYTE)hIl2Cpp + CIOMJJPHOFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMJJPHOFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
