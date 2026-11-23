#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define E9BA381EBC93E92C_E238674919E92198_OFFSET UNITYSDK_OFFSET(0x2A54A20)
#define E9BA381EBC93E92C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9BA381EBC93E92C_TypeDefinitionIndex = 18390;

class E9BA381EBC93E92C : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* EC7183FB7A9C1127; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9BA381EBC93E92C__CTOR_OFFSET))(this);
	}

	::System::Boolean E238674919E92198()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E9BA381EBC93E92C_E238674919E92198_OFFSET))(this);
	}
};
