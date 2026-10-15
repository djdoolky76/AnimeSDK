#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEMDGBKPCDK.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
namespace UnityEngine { class Transform; }

#define STAGEHARMONYTRANSFORMLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE996C00)
#define STAGEHARMONYTRANSFORMLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE9970E0)
#define STAGEHARMONYTRANSFORMLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE996AC0)
#define STAGEHARMONYTRANSFORMLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE996720)
#define STAGEHARMONYTRANSFORMLINKSLOT_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xE996CF0)
#define STAGEHARMONYTRANSFORMLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE996900)

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
