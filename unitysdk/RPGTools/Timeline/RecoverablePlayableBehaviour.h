#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74A2A0)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0x1C772500)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PCLKCIHMKJK_OFFSET UNITYSDK_OFFSET(0x1C772450)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PNPLGMGKDBP_OFFSET UNITYSDK_OFFSET(0x1C748500)
#define RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1C7723C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RecoverablePlayableBehaviour_TypeDefinitionIndex = 49537;

	class RecoverablePlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Int32 _ProcessFrameCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void PNPLGMGKDBP(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PNPLGMGKDBP_OFFSET))(this, a1);
		}

		::System::Void PCLKCIHMKJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_PCLKCIHMKJK_OFFSET))(this);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECOVERABLEPLAYABLEBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

	};
}
