#pragma once
#include "unitysdk/unitysdk.h"
class LNFKIOADLAN;
namespace RPG::GameCore { class TaskContext; }

#define KOGPIJFPAED_CTOR_OFFSET UNITYSDK_OFFSET(0xB590530)
#define KOGPIJFPAED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB590560)

inline static constexpr unsigned int KOGPIJFPAED_TypeDefinitionIndex = 57881;

	class KOGPIJFPAED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNFKIOADLAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNFKIOADLAN*))((::PBYTE)hIl2Cpp + KOGPIJFPAED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGPIJFPAED_ONTASKBEGIN_OFFSET))(this);
		}

	};
