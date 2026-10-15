#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
class StageHarmonyDemodulator;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define STAGEHARMONYMATLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE995530)
#define STAGEHARMONYMATLINKSLOT_CLBCDNCCDCM_OFFSET UNITYSDK_OFFSET(0xE995180)
#define STAGEHARMONYMATLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE9962D0)
#define STAGEHARMONYMATLINKSLOT_FCCHPLMIHKM_OFFSET UNITYSDK_OFFSET(0xE9957A0)
#define STAGEHARMONYMATLINKSLOT_GCHIBNPLFNF_OFFSET UNITYSDK_OFFSET(0xE995C70)
#define STAGEHARMONYMATLINKSLOT_GET_ISSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0xE995170)
#define STAGEHARMONYMATLINKSLOT_JJKACGIEJND_OFFSET UNITYSDK_OFFSET(0xE9956C0)
#define STAGEHARMONYMATLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE9953D0)
#define STAGEHARMONYMATLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE995340)
#define STAGEHARMONYMATLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE995390)

	class StageHarmonyMatLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::System::Boolean isRendererGroup; // 0x40
		::System::Byte _padding0[0x7];
		::UnityEngine::Renderer* TargetRenderer; // 0x48
		::System::Int32 MatID; // 0x50
		::System::Byte _padding1[0x4];
		::System::String* PropertyName; // 0x58
		::System::Int32 _PropertyID; // 0x60
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetRenderers; // 0x68
		::System::Boolean useInstanceMode; // 0x70
		::System::Byte _padding3[0x7];
		::UnityEngine::Material* OriginalMat; // 0x78
		::UnityEngine::Material* InstancedMat; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_isSingleRenderer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_GET_ISSINGLERENDERER_OFFSET))(this);
		}

		::System::Void CLBCDNCCDCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_CLBCDNCCDCM_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void JJKACGIEJND(::UnityEngine::Renderer* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_JJKACGIEJND_OFFSET))(this, a1, a2);
		}

		::System::Void GCHIBNPLFNF(::StageHarmonyDemodulator* a1, ::UnityEngine::Renderer* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_GCHIBNPLFNF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FCCHPLMIHKM(::StageHarmonyDemodulator* a1, ::UnityEngine::Material* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_FCCHPLMIHKM_OFFSET))(this, a1, a2, a3);
		}

	};
