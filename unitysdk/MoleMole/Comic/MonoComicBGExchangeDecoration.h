#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicDecorateEventBase.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class ImageExchangeEvent; }
namespace UnityEngine::Timeline { class ImageExchangeEventZoneVer; }

#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_ALJNKBIPAEM_OFFSET UNITYSDK_OFFSET(0x121A3950)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_BPMAKBNIMLG_OFFSET UNITYSDK_OFFSET(0x121A3B20)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_EOKGEIOGBMF_OFFSET UNITYSDK_OFFSET(0x121A3A80)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_ILPNDFKFBOC_OFFSET UNITYSDK_OFFSET(0x121A3960)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITBGNODES_OFFSET UNITYSDK_OFFSET(0x121A2DE0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x121A28D0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_JGCOOEMFIGP_OFFSET UNITYSDK_OFFSET(0x121A3110)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_KMPKHCJMFEC_OFFSET UNITYSDK_OFFSET(0x121A3820)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_LAAJOGHHPMH_OFFSET UNITYSDK_OFFSET(0x121A39F0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x121A34B0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x121A3510)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x121A36C0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x121A3900)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBGExchangeDecoration_TypeDefinitionIndex = 91128;

	class MonoComicBGExchangeDecoration : public ::MoleMole::Comic::MonoComicDecorateEventBase
	{
	public:
		::UnityEngine::Timeline::ImageExchangeEvent* IGLBHBHINFH; // 0x80
		::UnityEngine::Timeline::ImageExchangeEventZoneVer* APMEFLILEHB; // 0x88
		::UnityEngine::Sprite* ELGNLLHAOPJ; // 0x90
		::System::Single KJKAGFGJMGC; // 0x98
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* HIAMGGNFKPM; // 0xA0
		::UnityEngine::Transform* LODPMIHLJBA; // 0xA8
		::UnityEngine::CanvasGroup* BCHIEKJLINC; // 0xB0
		::UnityEngine::Transform* PLMPJKECMMF; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void InitBGNodes(::UnityEngine::Transform* FDFGIHCJAOO, ::UnityEngine::Transform* PNEALNOMJDD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITBGNODES_OFFSET))(this, FDFGIHCJAOO, PNEALNOMJDD);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void KMPKHCJMFEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_KMPKHCJMFEC_OFFSET))(this);
		}

		::System::Void ALJNKBIPAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_ALJNKBIPAEM_OFFSET))(this);
		}

		::System::Void ILPNDFKFBOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_ILPNDFKFBOC_OFFSET))(this);
		}

		::System::Void LAAJOGHHPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_LAAJOGHHPMH_OFFSET))(this);
		}

		::System::Void EOKGEIOGBMF(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_EOKGEIOGBMF_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JGCOOEMFIGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_JGCOOEMFIGP_OFFSET))(this);
		}

		::System::Void BPMAKBNIMLG(::UnityEngine::Timeline::ComicEventBase* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_BPMAKBNIMLG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
