#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/WhiteBalanceBehaviour_PHDODDPMPGL.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_BPMPFIEAOKG_OFFSET UNITYSDK_OFFSET(0x18974690)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x189744C0)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18975380)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x18975360)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18974B10)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x18975350)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18974A80)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18975370)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18974F80)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18975130)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18975340)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WhiteBalanceBehaviour_TypeDefinitionIndex = 79420;

	class WhiteBalanceBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::WhiteBalanceBehaviour_PHDODDPMPGL _methodParm; // 0x18
		::System::Boolean enabled; // 0x2C
		::System::Boolean active_temperature; // 0x2D
		::System::Boolean use_temperature; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single temperature; // 0x30
		::System::Boolean active_tint; // 0x34
		::System::Boolean use_tint; // 0x35
		::System::Byte _padding1[0x2];
		::System::Single tint; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Rendering::Universal::WhiteBalance* _WhiteBalance; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::WhiteBalance* BPMPFIEAOKG(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::WhiteBalance*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_BPMPFIEAOKG_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
