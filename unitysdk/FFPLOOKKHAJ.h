#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableLocalPlayerIgnoreTimeRewindCollision; }
namespace RPG::GameCore { class TaskContext; }

#define FFPLOOKKHAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1666D730)
#define FFPLOOKKHAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1666D760)

inline static constexpr unsigned int FFPLOOKKHAJ_TypeDefinitionIndex = 54534;

	class FFPLOOKKHAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*))((::PBYTE)hIl2Cpp + FFPLOOKKHAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPLOOKKHAJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
