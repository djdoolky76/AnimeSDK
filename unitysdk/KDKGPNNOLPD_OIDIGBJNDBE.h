#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define KDKGPNNOLPD_OIDIGBJNDBE_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x130B3A40)
#define KDKGPNNOLPD_OIDIGBJNDBE_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x130B3B90)
#define KDKGPNNOLPD_OIDIGBJNDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x130B3A30)

inline static constexpr unsigned int KDKGPNNOLPD_OIDIGBJNDBE_TypeDefinitionIndex = 60648;

class KDKGPNNOLPD_OIDIGBJNDBE : public ::System::Object
{
public:
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* DFMKILICPFB; // 0x10
	::MoleMole::EntityHandle ELNEANMJFJB; // 0x18
	::HOCDHMEPPEG KKGHNCLKODA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_OIDIGBJNDBE__CTOR_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_OIDIGBJNDBE_BNHIDAPEHNL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_OIDIGBJNDBE_MAKNEHPPFFN_OFFSET))(this);
	}
};
