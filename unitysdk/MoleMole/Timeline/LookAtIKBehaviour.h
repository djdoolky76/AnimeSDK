#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RootMotion::FinalIK { class LookAtIK; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_BOCGIJHEKJG_OFFSET UNITYSDK_OFFSET(0x1A0F6400)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x14B4D910)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0F6BD0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0F6BC0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KBNMIGNPDLD_OFFSET UNITYSDK_OFFSET(0x1A0F6C00)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1A0F6BE0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0F6BF0)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A0F6710)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0F6750)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0F6D50)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0F6220)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F6930)
#define MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F6BA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtIKBehaviour_TypeDefinitionIndex = 68349;

	class LookAtIKBehaviour : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Boolean enabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single weight; // 0x1C
		::System::Single bodyWeight; // 0x20
		::System::Single headWeight; // 0x24
		::System::Single eyesWeight; // 0x28
		::System::Boolean CloseUpdate; // 0x2C
		::System::Byte _padding1[0x3];
		::RootMotion::FinalIK::LookAtIK* _lookAtIK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KDOIBCBFBAG_OFFSET))(this);
		}

		::RootMotion::FinalIK::LookAtIK* BOCGIJHEKJG(::System::Object* NEEMKJBIIBC)
		{
			return ((::RootMotion::FinalIK::LookAtIK*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_BOCGIJHEKJG_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBNMIGNPDLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_KBNMIGNPDLD_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
