#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopCharacterAllSound; }
namespace RPG::GameCore { class TaskContext; }

#define DGLPABGBHMP_CTOR_OFFSET UNITYSDK_OFFSET(0xE851CA0)
#define DGLPABGBHMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE851CD0)
#define DGLPABGBHMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE851D10)

inline static constexpr unsigned int DGLPABGBHMP_TypeDefinitionIndex = 56461;

	class DGLPABGBHMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopCharacterAllSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopCharacterAllSound*))((::PBYTE)hIl2Cpp + DGLPABGBHMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLPABGBHMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLPABGBHMP_ONTASKBEGIN_OFFSET))(this);
		}

	};
