#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_UI_MONOSPRITECAPTUREANIMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11510)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoSpriteCaptureAnimParam_TypeDefinitionIndex = 350;

	class MonoSpriteCaptureAnimParam : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 LoopDuration; // 0x20
		::System::UInt32 NormalSuccessDuration; // 0x24
		::System::UInt32 LargeSuccessDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITECAPTUREANIMPARAM__CTOR_OFFSET))(this);
		}
	};
}
