#pragma once
#include "unitysdk/unitysdk.h"
class PHKBMFDEOOK;
namespace RPG::GameCore { class TaskContext; }

#define JKIBMOCCJHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB21D9B0)
#define JKIBMOCCJHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21D9E0)

inline static constexpr unsigned int JKIBMOCCJHO_TypeDefinitionIndex = 56431;

	class JKIBMOCCJHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PHKBMFDEOOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PHKBMFDEOOK*))((::PBYTE)hIl2Cpp + JKIBMOCCJHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIBMOCCJHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
