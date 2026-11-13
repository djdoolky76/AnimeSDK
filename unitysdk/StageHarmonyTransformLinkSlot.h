#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEMDGBKPCDK.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
namespace UnityEngine { class Transform; }

#define STAGEHARMONYTRANSFORMLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0x1AC56120)
#define STAGEHARMONYTRANSFORMLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC56600)
#define STAGEHARMONYTRANSFORMLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x1AC55FE0)
#define STAGEHARMONYTRANSFORMLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AC55C40)
#define STAGEHARMONYTRANSFORMLINKSLOT_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x1AC56210)
#define STAGEHARMONYTRANSFORMLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x1AC55E20)

inline static constexpr unsigned int StageHarmonyTransformLinkSlot_TypeDefinitionIndex = 48577;

	class StageHarmonyTransformLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::UnityEngine::Transform* TargetTransform; // 0x40
		::System::Boolean UseLocalSpace; // 0x48
		::System::Boolean _IsInited; // 0x49
		::System::Byte _padding0[0x2];
		::System::Single _cachedSignal; // 0x4C
		::JEMDGBKPCDK _cachedTransformData; // 0x50
		::System::Boolean _hasNewSignal; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMLINKSLOT_NBJFLGNEBED_OFFSET))(this);
		}

	};
