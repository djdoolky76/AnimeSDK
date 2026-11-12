#pragma once
#include "unitysdk/unitysdk.h"
class OOHFEMPOOCO;
namespace RPG::GameCore { class TaskContext; }

#define ACNEEKAHPIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB78CB70)
#define ACNEEKAHPIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB78CBA0)
#define ACNEEKAHPIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB78CBE0)

inline static constexpr unsigned int ACNEEKAHPIB_TypeDefinitionIndex = 55103;

	class ACNEEKAHPIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + ACNEEKAHPIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNEEKAHPIB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNEEKAHPIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
