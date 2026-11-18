#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ControlPlayableAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class JGNFGDHCNLN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_AMLLPABJJEC_OFFSET UNITYSDK_OFFSET(0x1A0A2110)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x1A0A20D0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A09FA10)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_FJMKBFFAAHM_OFFSET UNITYSDK_OFFSET(0x1A0A1360)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_IIMFHCEMMLF_OFFSET UNITYSDK_OFFSET(0x1A0A2350)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_KMNMMFEJBDO_OFFSET UNITYSDK_OFFSET(0x1A0A1790)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_LMDFMJDJHDM_OFFSET UNITYSDK_OFFSET(0x1A0A1FB0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_OAOBDCICAOI_OFFSET UNITYSDK_OFFSET(0x1A0A1C70)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_PCBPPFKBLEB_OFFSET UNITYSDK_OFFSET(0x1A0A1150)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_PICPMGFOIDL_OFFSET UNITYSDK_OFFSET(0x1A0A12D0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A1E00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoControlPlayableAsset_TypeDefinitionIndex = 55966;

	class MihoyoControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset
	{
	public:
		::JGNFGDHCNLN* template_; // 0x60
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> avatarGo; // 0x68
		::System::Byte _padding0[0x8];
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> bindingTransform; // 0x78
		::System::Byte _padding1[0x8];
		::UnityEngine::Timeline::TimelineClip* clip; // 0x88
		::UnityEngine::Playables::PlayableGraph graph; // 0x90
		::System::Boolean controlScale; // 0xA0
		::System::Boolean controlPos; // 0xA1
		::System::Boolean controlRot; // 0xA2
		::System::Byte _padding2[0x1];
		::System::Single timeScale; // 0xA4
		::System::String* bindingPath; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}

		static ::System::Void LMDFMJDJHDM(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Playables::Playable FMMONKDPKFN, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::System::Int32 EAECOJGEGFP)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_LMDFMJDJHDM_OFFSET))(MHPNGBGGMMN, FMMONKDPKFN, HKOFGPMIFHB, EAECOJGEGFP);
		}

		static ::System::Void FJMKBFFAAHM(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* ACHKMJKCPFL, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_FJMKBFFAAHM_OFFSET))(ACHKMJKCPFL, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void AMLLPABJJEC(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_AMLLPABJJEC_OFFSET))(this, MHHIBHLEKHO, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* PICPMGFOIDL(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_PICPMGFOIDL_OFFSET))(IAPKABMDJNF);
		}

		static ::UnityEngine::Playables::Playable OAOBDCICAOI(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* EOCLCFNBBAP)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_OAOBDCICAOI_OFFSET))(HKOFGPMIFHB, MHPNGBGGMMN, EOCLCFNBBAP);
		}

		::System::Void IIMFHCEMMLF(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::GameObject* OPBLFKPONLF, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_IIMFHCEMMLF_OFFSET))(this, MHHIBHLEKHO, OPBLFKPONLF, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void PCBPPFKBLEB(::UnityEngine::GameObject* IAPKABMDJNF, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_PCBPPFKBLEB_OFFSET))(this, IAPKABMDJNF, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void KMNMMFEJBDO(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* AHJDAFMMALM, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLPLAYABLEASSET_KMNMMFEJBDO_OFFSET))(this, AHJDAFMMALM, MHPNGBGGMMN, PCIPDLEGOJN);
		}
	};
}
