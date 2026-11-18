#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HighLightAirCombatCameraFollowType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFMJNHPDJIM_EJLDKCLPFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x67F1A0)

inline static constexpr unsigned int BFMJNHPDJIM_EJLDKCLPFGA_TypeDefinitionIndex = 52811;

struct alignas(8) BFMJNHPDJIM_EJLDKCLPFGA
{
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HighLightAirCombatCameraFollowType, ::System::Collections::Generic::List_1<::System::String*>*>* GBNFJEKHLOM; // 0x20
	::System::String* BJLBNBCHIGG; // 0x28
	::UnityEngine::Vector3 IMBMMGIFBBP; // 0x30
	::System::Single ECMOEENIHME; // 0x3C
	::UnityEngine::Vector2 DFPJMNPKKGI; // 0x40
	::System::Single EDEAOEIAJGI; // 0x48
	::System::Single PMKDBJLPMIG; // 0x4C
	::System::Single IEEHOGFDDNK; // 0x50
	::System::Single KJHPKFCFAMP; // 0x54
	::System::Single BAFOIENGGLP; // 0x58

	::System::Void _ctor(::MoleMole::Config::HighLightAirCombatCameraConfig* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatCameraConfig*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_EJLDKCLPFGA__CTOR_OFFSET))(this, CBLGCIFLMKL);
	}
};
