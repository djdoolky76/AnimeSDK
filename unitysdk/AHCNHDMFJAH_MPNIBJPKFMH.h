#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKPLAFMCLNA.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define AHCNHDMFJAH_MPNIBJPKFMH_EFKKONJMGLF_OFFSET UNITYSDK_OFFSET(0x1647AB60)
#define AHCNHDMFJAH_MPNIBJPKFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1647AB50)

inline static constexpr unsigned int AHCNHDMFJAH_MPNIBJPKFMH_TypeDefinitionIndex = 78388;

class AHCNHDMFJAH_MPNIBJPKFMH : public ::System::Object
{
public:
	::NKPLAFMCLNA DFMKILICPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_MPNIBJPKFMH__CTOR_OFFSET))(this);
	}

	::System::Void EFKKONJMGLF(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_MPNIBJPKFMH_EFKKONJMGLF_OFFSET))(this, AAOCANGHBDG);
	}
};
