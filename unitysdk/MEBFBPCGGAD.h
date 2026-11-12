#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockMainStreamSourceToPlayerTeleportPos; }
namespace RPG::GameCore { class TaskContext; }

#define MEBFBPCGGAD_CTOR_OFFSET UNITYSDK_OFFSET(0xC16A2A0)
#define MEBFBPCGGAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC16A2D0)

inline static constexpr unsigned int MEBFBPCGGAD_TypeDefinitionIndex = 59459;

	class MEBFBPCGGAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*))((::PBYTE)hIl2Cpp + MEBFBPCGGAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBFBPCGGAD_ONTASKBEGIN_OFFSET))(this);
		}

	};
