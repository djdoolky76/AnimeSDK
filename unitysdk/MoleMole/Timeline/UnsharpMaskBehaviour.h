#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/UnsharpMaskBehaviour_OIFLDHOHDKP.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x19B75BF0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19B77330)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_JINCJPOGFEB_OFFSET UNITYSDK_OFFSET(0x19B75E40)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x19B77350)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x19B76300)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x19B77320)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19B76230)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x19B77340)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19B76DB0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19B76F90)
#define MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B77300)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnsharpMaskBehaviour_TypeDefinitionIndex = 59646;

	class UnsharpMaskBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::UnsharpMaskBehaviour_OIFLDHOHDKP _methodParm; // 0x18
		::System::Boolean enabled; // 0x40
		::System::Boolean active_enable; // 0x41
		::System::Boolean use_enable; // 0x42
		::System::Boolean enable; // 0x43
		::System::Boolean active_radius; // 0x44
		::System::Boolean use_radius; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single radius; // 0x48
		::System::Boolean active_amount; // 0x4C
		::System::Boolean use_amount; // 0x4D
		::System::Byte _padding1[0x2];
		::System::Single amount; // 0x50
		::System::Boolean active_sampleCount; // 0x54
		::System::Boolean use_sampleCount; // 0x55
		::System::Byte _padding2[0x2];
		::System::Int32 sampleCount; // 0x58
		::System::Boolean active_threshold; // 0x5C
		::System::Boolean use_threshold; // 0x5D
		::System::Byte _padding3[0x2];
		::System::Single threshold; // 0x60
		::System::Boolean active_debugMode; // 0x64
		::System::Boolean use_debugMode; // 0x65
		::System::Boolean debugMode; // 0x66
		::System::Byte _padding4[0x1];
		::UnityEngine::Rendering::Universal::UnsharpMask* _UnsharpMask; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::UnsharpMask* JINCJPOGFEB(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::UnsharpMask*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKBEHAVIOUR_JINCJPOGFEB_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
