#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
namespace UnityEngine { class Animation; }

#define STAGEHARMONYANIMATIONLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE980A00)
#define STAGEHARMONYANIMATIONLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE981020)
#define STAGEHARMONYANIMATIONLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE9809C0)
#define STAGEHARMONYANIMATIONLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE980900)
#define STAGEHARMONYANIMATIONLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE980960)

inline static constexpr unsigned int StageHarmonyAnimationLinkSlot_TypeDefinitionIndex = 47534;

	class StageHarmonyAnimationLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::UnityEngine::Animation* TargetAnimation; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYANIMATIONLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

	};
