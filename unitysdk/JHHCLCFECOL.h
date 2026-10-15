#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PresetColliderStateBeforeFlipEraRegion; }
namespace RPG::GameCore { class TaskContext; }

#define JHHCLCFECOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B3860)
#define JHHCLCFECOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1B3890)

inline static constexpr unsigned int JHHCLCFECOL_TypeDefinitionIndex = 52769;

	class JHHCLCFECOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + JHHCLCFECOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHCLCFECOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
