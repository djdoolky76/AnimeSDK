#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ChannelMixerBehaviour_HJDGPCMHHIK.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_AFBCPFJPGMN_OFFSET UNITYSDK_OFFSET(0x13F16B90)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13F168A0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13F183B0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x13F18390)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13F170B0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x13F183C0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13F16F80)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13F183A0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13F17CD0)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13F17F20)
#define MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F18360)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChannelMixerBehaviour_TypeDefinitionIndex = 58566;

	class ChannelMixerBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ChannelMixerBehaviour_HJDGPCMHHIK _methodParm; // 0x18
		::System::Boolean enabled; // 0x64
		::System::Boolean active_redOutRedIn; // 0x65
		::System::Boolean use_redOutRedIn; // 0x66
		::System::Byte _padding0[0x1];
		::System::Single redOutRedIn; // 0x68
		::System::Boolean active_redOutGreenIn; // 0x6C
		::System::Boolean use_redOutGreenIn; // 0x6D
		::System::Byte _padding1[0x2];
		::System::Single redOutGreenIn; // 0x70
		::System::Boolean active_redOutBlueIn; // 0x74
		::System::Boolean use_redOutBlueIn; // 0x75
		::System::Byte _padding2[0x2];
		::System::Single redOutBlueIn; // 0x78
		::System::Boolean active_greenOutRedIn; // 0x7C
		::System::Boolean use_greenOutRedIn; // 0x7D
		::System::Byte _padding3[0x2];
		::System::Single greenOutRedIn; // 0x80
		::System::Boolean active_greenOutGreenIn; // 0x84
		::System::Boolean use_greenOutGreenIn; // 0x85
		::System::Byte _padding4[0x2];
		::System::Single greenOutGreenIn; // 0x88
		::System::Boolean active_greenOutBlueIn; // 0x8C
		::System::Boolean use_greenOutBlueIn; // 0x8D
		::System::Byte _padding5[0x2];
		::System::Single greenOutBlueIn; // 0x90
		::System::Boolean active_blueOutRedIn; // 0x94
		::System::Boolean use_blueOutRedIn; // 0x95
		::System::Byte _padding6[0x2];
		::System::Single blueOutRedIn; // 0x98
		::System::Boolean active_blueOutGreenIn; // 0x9C
		::System::Boolean use_blueOutGreenIn; // 0x9D
		::System::Byte _padding7[0x2];
		::System::Single blueOutGreenIn; // 0xA0
		::System::Boolean active_blueOutBlueIn; // 0xA4
		::System::Boolean use_blueOutBlueIn; // 0xA5
		::System::Byte _padding8[0x2];
		::System::Single blueOutBlueIn; // 0xA8
		::System::Byte _padding9[0x4];
		::UnityEngine::Rendering::Universal::ChannelMixer* _ChannelMixer; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::ChannelMixer* AFBCPFJPGMN(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMixer*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_AFBCPFJPGMN_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHANNELMIXERBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
