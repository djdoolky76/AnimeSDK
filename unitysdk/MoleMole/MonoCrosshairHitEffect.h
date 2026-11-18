#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class OGJNHDLJIBM;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_GHMDOJHGJJF_OFFSET UNITYSDK_OFFSET(0x1A917040)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_HFKIMGAHFOL_OFFSET UNITYSDK_OFFSET(0x1A916F80)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_JBKOHHMGAMI_OFFSET UNITYSDK_OFFSET(0x1A916E90)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_JFLBBNNGGPB_OFFSET UNITYSDK_OFFSET(0x1A916420)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_JHLNEBJHKMK_OFFSET UNITYSDK_OFFSET(0x1A9167A0)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_JKMDCDIBFCD_OFFSET UNITYSDK_OFFSET(0x1A916AD0)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_KOJEHEAEIIE_OFFSET UNITYSDK_OFFSET(0x1A916640)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_MFEPJMLCJDL_OFFSET UNITYSDK_OFFSET(0x1A916EF0)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_NPAOKLGBEKK_OFFSET UNITYSDK_OFFSET(0x1A916740)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A9169F0)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A9166C0)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A916370)
#define MOLEMOLE_MONOCROSSHAIRHITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A916A70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCrosshairHitEffect_TypeDefinitionIndex = 58191;

	class MonoCrosshairHitEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* _hitAnimation; // 0x18
		::UnityEngine::AnimationClip* _hitAnimationClip; // 0x20
		::UnityEngine::AnimationClip* _hitRecoverAnimation; // 0x28
		::System::Single _hitRecoverDelay; // 0x30
		::System::Byte _padding0[0x4];
		::OGJNHDLJIBM* IACAHMDOGAK; // 0x38
		::UnityEngine::Coroutine* FPKIPKHJEDP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void NPAOKLGBEKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_NPAOKLGBEKK_OFFSET))(this);
		}

		::System::Void JFLBBNNGGPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_JFLBBNNGGPB_OFFSET))(this);
		}

		::System::Void KOJEHEAEIIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_KOJEHEAEIIE_OFFSET))(this);
		}

		::System::Boolean JBKOHHMGAMI(::System::String*& LIPIPGHBHFH)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_JBKOHHMGAMI_OFFSET))(this, LIPIPGHBHFH);
		}

		::System::Collections::IEnumerator* MFEPJMLCJDL(::System::String* LINMKKEDONF, ::System::String* KJIBABBAIOD)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_MFEPJMLCJDL_OFFSET))(this, LINMKKEDONF, KJIBABBAIOD);
		}

		::System::Void HFKIMGAHFOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_HFKIMGAHFOL_OFFSET))(this);
		}

		::System::Boolean JKMDCDIBFCD(::UnityEngine::AnimationClip* PNLAAEFGJON, ::System::String*& LIPIPGHBHFH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_JKMDCDIBFCD_OFFSET))(this, PNLAAEFGJON, LIPIPGHBHFH);
		}

		::System::Void GHMDOJHGJJF(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_GHMDOJHGJJF_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void JHLNEBJHKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCROSSHAIRHITEFFECT_JHLNEBJHKMK_OFFSET))(this);
		}
	};
}
