#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define GIOPLDHBEGH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x11DB1990)
#define GIOPLDHBEGH__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB1980)

inline static constexpr unsigned int GIOPLDHBEGH_TypeDefinitionIndex = 72293;

class GIOPLDHBEGH : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* MOMMJBNMIKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOPLDHBEGH__CTOR_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOPLDHBEGH_JDAPDDEOCEA_OFFSET))(this);
	}
};
