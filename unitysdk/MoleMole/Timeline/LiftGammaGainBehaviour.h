#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LiftGammaGainBehaviour_AJIGMJGDFHG.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A09E4B0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_FGIFFICCLJB_OFFSET UNITYSDK_OFFSET(0x1A09E6E0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A09F6F0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A09F700)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A09EB80)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A09F6E0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A09EAD0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A09F6D0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A09F130)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A09F2F0)
#define MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09F6A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LiftGammaGainBehaviour_TypeDefinitionIndex = 91547;

	class LiftGammaGainBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LiftGammaGainBehaviour_AJIGMJGDFHG _methodParm; // 0x18
		::System::Boolean enabled; // 0x58
		::System::Boolean active_lift; // 0x59
		::System::Boolean use_lift; // 0x5A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector4 lift; // 0x5C
		::System::Boolean active_gamma; // 0x6C
		::System::Boolean use_gamma; // 0x6D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector4 gamma; // 0x70
		::System::Boolean active_gain; // 0x80
		::System::Boolean use_gain; // 0x81
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector4 gain; // 0x84
		::System::Byte _padding3[0x4];
		::UnityEngine::Rendering::Universal::LiftGammaGain* _LiftGammaGain; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::LiftGammaGain* FGIFFICCLJB(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::LiftGammaGain*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_FGIFFICCLJB_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIFTGAMMAGAINBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
