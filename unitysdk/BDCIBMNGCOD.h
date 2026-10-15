#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopAim; }
namespace RPG::GameCore { class TaskContext; }

#define BDCIBMNGCOD_CTOR_OFFSET UNITYSDK_OFFSET(0x162ECAF0)
#define BDCIBMNGCOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162ECB20)

inline static constexpr unsigned int BDCIBMNGCOD_TypeDefinitionIndex = 55899;

	class BDCIBMNGCOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopAim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopAim*))((::PBYTE)hIl2Cpp + BDCIBMNGCOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCIBMNGCOD_ONTASKBEGIN_OFFSET))(this);
		}

	};
