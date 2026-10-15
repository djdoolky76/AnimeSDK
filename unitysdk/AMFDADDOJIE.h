#pragma once
#include "unitysdk/unitysdk.h"
class KBJOCDJJIKG;
namespace RPG::GameCore { class TaskContext; }

#define AMFDADDOJIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1557C8B0)
#define AMFDADDOJIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1557C8E0)
#define AMFDADDOJIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1557C920)

inline static constexpr unsigned int AMFDADDOJIE_TypeDefinitionIndex = 55374;

	class AMFDADDOJIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KBJOCDJJIKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KBJOCDJJIKG*))((::PBYTE)hIl2Cpp + AMFDADDOJIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFDADDOJIE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFDADDOJIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
