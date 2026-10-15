#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/QTEMixer_QTEState.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DGDCNMMBMKA;
class EBMMGODFEEO;
namespace RPGTools::Timeline { class QTEData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_QTEMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE931240)
#define RPGTOOLS_TIMELINE_QTEMIXER_DMOJDFGLDDA_OFFSET UNITYSDK_OFFSET(0xE930B50)
#define RPGTOOLS_TIMELINE_QTEMIXER_DPGACILCJHC_OFFSET UNITYSDK_OFFSET(0xE9311B0)
#define RPGTOOLS_TIMELINE_QTEMIXER_EDMDOGJAALK_OFFSET UNITYSDK_OFFSET(0xE9308E0)
#define RPGTOOLS_TIMELINE_QTEMIXER_JBMAPGJPBJK_OFFSET UNITYSDK_OFFSET(0xE92FBF0)
#define RPGTOOLS_TIMELINE_QTEMIXER_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xE930CF0)
#define RPGTOOLS_TIMELINE_QTEMIXER_NOJCAGEDEKO_OFFSET UNITYSDK_OFFSET(0xE930830)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE930020)
#define RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE9305B0)
#define RPGTOOLS_TIMELINE_QTEMIXER_PCOPAOFGDOH_OFFSET UNITYSDK_OFFSET(0xE9307D0)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET UNITYSDK_OFFSET(0xE931250)
#define RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET UNITYSDK_OFFSET(0xE931310)

namespace RPGTools::Timeline
{
	class QTEMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::QTEData* _QTEData; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::EBMMGODFEEO* _DirectorState; // 0x20
		::DGDCNMMBMKA* _EffectMgr; // 0x28
		::UnityEngine::Coroutine* _FailScreenTransferCoroutine; // 0x30
		::RPGTools::Timeline::QTEMixer_QTEState _State; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void JBMAPGJPBJK(::RPGTools::Timeline::QTEData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::QTEData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_JBMAPGJPBJK_OFFSET))(this, a1);
		}

		::System::Void EDMDOGJAALK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_EDMDOGJAALK_OFFSET))(this, a1);
		}

		::System::Void LNMOCNDILJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_LNMOCNDILJN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* DPGACILCJHC(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_DPGACILCJHC_OFFSET))(this, a1);
		}

		::System::Void PCOPAOFGDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_PCOPAOFGDOH_OFFSET))(this);
		}

		::System::Void NOJCAGEDEKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_NOJCAGEDEKO_OFFSET))(this, a1);
		}

		::System::Void DMOJDFGLDDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER_DMOJDFGLDDA_OFFSET))(this, a1);
		}

		::System::Void __OnFail_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_0_OFFSET))(this);
		}

		::System::Void __OnFail_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEMIXER___ONFAIL_B__4_1_OFFSET))(this);
		}

	};
}
