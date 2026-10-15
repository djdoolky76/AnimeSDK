#pragma once
#include "unitysdk/unitysdk.h"
class HBFEMMFOLEA;
namespace RPG::GameCore { class TaskContext; }

#define APFLBKLIPHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA8FB0)
#define APFLBKLIPHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BA8FE0)

inline static constexpr unsigned int APFLBKLIPHG_TypeDefinitionIndex = 58627;

	class APFLBKLIPHG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HBFEMMFOLEA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HBFEMMFOLEA*))((::PBYTE)hIl2Cpp + APFLBKLIPHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLBKLIPHG_ONTASKBEGIN_OFFSET))(this);
		}

	};
