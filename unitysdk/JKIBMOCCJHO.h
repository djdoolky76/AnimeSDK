#pragma once
#include "unitysdk/unitysdk.h"
class PHKBMFDEOOK;
namespace RPG::GameCore { class TaskContext; }

#define JKIBMOCCJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x17B23890)
#define JKIBMOCCJHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B238C0)

inline static constexpr unsigned int JKIBMOCCJHO_TypeDefinitionIndex = 57649;

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
