#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"

#define MOLEMOLE_TIMELINE_LOOKATTRACK_ENKKBKICLAO_OEANONPOMFF_OFFSET UNITYSDK_OFFSET(0x162F8F90)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_ENKKBKICLAO__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8F80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtTrack_ENKKBKICLAO_TypeDefinitionIndex = 70429;

	class LookAtTrack_ENKKBKICLAO : public ::System::Object
	{
	public:
		::System::Int32 EEGBEFGJJBM; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Animations::AnimationLayerMixerPlayable FMMONKDPKFN; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ENKKBKICLAO__CTOR_OFFSET))(this);
		}

		::System::Void OEANONPOMFF(::System::Single IECOJPMPJMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ENKKBKICLAO_OEANONPOMFF_OFFSET))(this, IECOJPMPJMP);
		}
	};
}
