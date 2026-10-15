#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleSetCameraMode; }
namespace RPG::GameCore { class TaskContext; }

#define CKLNPHLGADO_CTOR_OFFSET UNITYSDK_OFFSET(0xD763EE0)
#define CKLNPHLGADO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD763F10)

inline static constexpr unsigned int CKLNPHLGADO_TypeDefinitionIndex = 54156;

	class CKLNPHLGADO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleSetCameraMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleSetCameraMode*))((::PBYTE)hIl2Cpp + CKLNPHLGADO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLNPHLGADO_ONTASKBEGIN_OFFSET))(this);
		}

	};
