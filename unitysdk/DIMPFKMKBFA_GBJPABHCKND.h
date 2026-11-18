#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace System { class String; }

#define DIMPFKMKBFA_GBJPABHCKND__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6840)

inline static constexpr unsigned int DIMPFKMKBFA_GBJPABHCKND_TypeDefinitionIndex = 41874;

struct alignas(8) DIMPFKMKBFA_GBJPABHCKND
{
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x18
	::System::String* EKNCGNENCDJ; // 0x20
	::System::Boolean AEALLDKPOKB; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single DOKNANJKADM; // 0x2C
	::System::Single CGMJGNDEADC; // 0x30

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraLockConfig* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraLockConfig*))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_GBJPABHCKND__CTOR_OFFSET))(this, CBLGCIFLMKL);
	}
};
