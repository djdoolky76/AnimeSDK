#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Nap_VoGroupStateListener.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define OCEANFEVERANIMCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xFD99120)
#define OCEANFEVERANIMCONTROLLER_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xFD98AF0)
#define OCEANFEVERANIMCONTROLLER_RESTOREBASEVALUES_OFFSET UNITYSDK_OFFSET(0xFD99090)
#define OCEANFEVERANIMCONTROLLER_STARTANIM_OFFSET UNITYSDK_OFFSET(0xFD98B40)
#define OCEANFEVERANIMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xFD98D70)
#define OCEANFEVERANIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xFD99300)

inline static constexpr unsigned int OceanFeverAnimController_TypeDefinitionIndex = 48535;

class OceanFeverAnimController : public ::MoleMole::Nap_VoGroupStateListener
{
public:
	::UnityEngine::AnimationCurve* heightOffsetCurve; // 0x38
	::UnityEngine::AnimationCurve* profileDecodeZCurve; // 0x40
	::UnityEngine::AnimationCurve* profileDecodeWCurve; // 0x48
	::System::Single animationDuration; // 0x50
	::System::Boolean _isPlaying; // 0x54
	::System::Byte _padding0[0x3];
	::UnityEngine::Rendering::Universal::VisualEnvironmentE* _visualEnvironment; // 0x58
	::System::Single _baseSeaPlanePosition; // 0x60
	::System::Single _baseDecodeZ; // 0x64
	::System::Single _baseDecodeW; // 0x68
	::System::Boolean _hasOceanConfigBase; // 0x6C
	::System::Byte _padding1[0x3];
	::System::Single _animStartTime; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnTriggered()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_ONTRIGGERED_OFFSET))(this);
	}

	::System::Void StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_STARTANIM_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void RestoreBaseValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANFEVERANIMCONTROLLER_RESTOREBASEVALUES_OFFSET))(this);
	}
};
