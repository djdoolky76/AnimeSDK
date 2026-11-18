#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class LightParams; }
namespace System { class Object; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x19F5DDB0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_FEPBIADPPJF_OFFSET UNITYSDK_OFFSET(0x19F5DDC0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x19F5DD90)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_JAPKIPLNFIL_OFFSET UNITYSDK_OFFSET(0x19F5D7D0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x19F5DEC0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_LOJFCNNGHNI_OFFSET UNITYSDK_OFFSET(0x19F5DAB0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_NPMKALEGLIN_OFFSET UNITYSDK_OFFSET(0x19F5D9D0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x19F5DDA0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19F5DC90)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x19F5DA30)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x19F5D740)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19F5DB20)
#define MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5DD10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightCompBehaviour_TypeDefinitionIndex = 77231;

	class LightCompBehaviour : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::Light* Light; // 0x18
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData; // 0x20
		::System::Boolean hasInitData; // 0x28
		::System::Byte _padding0[0x7];
		::MoleMole::Timeline::LightParams* lightParams; // 0x30
		::MoleMole::Timeline::LightParams* PreLightParams; // 0x38
		::System::Boolean HasRecordedParams; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void LOJFCNNGHNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_LOJFCNNGHNI_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void NPMKALEGLIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_NPMKALEGLIN_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void JAPKIPLNFIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_JAPKIPLNFIL_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void FEPBIADPPJF(::UnityEngine::Light* NLFGBFCCCLJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_FEPBIADPPJF_OFFSET))(this, NLFGBFCCCLJ);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPBEHAVIOUR_JEINNALOJDE_OFFSET))(this);
		}
	};
}
