#pragma once
#include "unitysdk/unitysdk.h"
class NEPHPDAPNIM;
namespace RPG::GameCore { class TaskContext; }

#define IBFPLIIPEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E24D60)
#define IBFPLIIPEJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E24D90)
#define IBFPLIIPEJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E24DD0)

inline static constexpr unsigned int IBFPLIIPEJG_TypeDefinitionIndex = 53941;

	class IBFPLIIPEJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NEPHPDAPNIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NEPHPDAPNIM*))((::PBYTE)hIl2Cpp + IBFPLIIPEJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFPLIIPEJG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFPLIIPEJG_ONTASKBEGIN_OFFSET))(this);
		}

	};
