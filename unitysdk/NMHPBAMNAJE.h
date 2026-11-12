#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class ModifyGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NMHPBAMNAJE_CPNBEICDINP_OFFSET UNITYSDK_OFFSET(0xC56EAC0)
#define NMHPBAMNAJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC56E800)
#define NMHPBAMNAJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC56E830)

inline static constexpr unsigned int NMHPBAMNAJE_TypeDefinitionIndex = 56384;

	class NMHPBAMNAJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CPNBEICDINP(::RPG::GameCore::GridFightManager* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_CPNBEICDINP_OFFSET))(this, a1, a2, a3);
		}

	};
