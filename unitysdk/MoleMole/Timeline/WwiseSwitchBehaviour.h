#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/EntityPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_DOLGGMFJCPI_OFFSET UNITYSDK_OFFSET(0x13F2AA00)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_FLACDLGDEKF_OFFSET UNITYSDK_OFFSET(0x13F2A780)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_FPNDDDFKNMJ_OFFSET UNITYSDK_OFFSET(0x13F2AA90)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13F2A6D0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_LFOLHBPBALI_OFFSET UNITYSDK_OFFSET(0x13F2A430)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x13F2A9F0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13F2A730)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2A9E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseSwitchBehaviour_TypeDefinitionIndex = 62945;

	class WwiseSwitchBehaviour : public ::MoleMole::Timeline::EntityPlayableBehaviour
	{
	public:
		::System::String* groupName; // 0x28
		::System::String* switchName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void LFOLHBPBALI(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_LFOLHBPBALI_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GALGFCPKMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_GALGFCPKMGC_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void FLACDLGDEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_FLACDLGDEKF_OFFSET))(this);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void DOLGGMFJCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_DOLGGMFJCPI_OFFSET))(this);
		}

		::System::Void FPNDDDFKNMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_FPNDDDFKNMJ_OFFSET))(this);
		}
	};
}
