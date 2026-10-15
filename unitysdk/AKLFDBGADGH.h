#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayerApplyInMapTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define AKLFDBGADGH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD1760)
#define AKLFDBGADGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CD1790)

inline static constexpr unsigned int AKLFDBGADGH_TypeDefinitionIndex = 58288;

	class AKLFDBGADGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerApplyInMapTeleport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerApplyInMapTeleport*))((::PBYTE)hIl2Cpp + AKLFDBGADGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLFDBGADGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
