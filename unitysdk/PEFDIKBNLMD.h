#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableIsometricTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define PEFDIKBNLMD_CTOR_OFFSET UNITYSDK_OFFSET(0xC031020)
#define PEFDIKBNLMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC031050)

inline static constexpr unsigned int PEFDIKBNLMD_TypeDefinitionIndex = 52744;

	class PEFDIKBNLMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableIsometricTeleport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableIsometricTeleport*))((::PBYTE)hIl2Cpp + PEFDIKBNLMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFDIKBNLMD_ONTASKBEGIN_OFFSET))(this);
		}

	};
