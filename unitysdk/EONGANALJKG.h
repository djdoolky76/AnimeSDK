#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockFov; }
namespace RPG::GameCore { class TaskContext; }

#define EONGANALJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x16B2B6E0)
#define EONGANALJKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B2B710)

inline static constexpr unsigned int EONGANALJKG_TypeDefinitionIndex = 54145;

	class EONGANALJKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + EONGANALJKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONGANALJKG_ONTASKBEGIN_OFFSET))(this);
		}

	};
