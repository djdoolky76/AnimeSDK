#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Chess/Timeline/Unity/FixedCameraData.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class GameObject; }

#define ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E45460)
#define ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x168A070)
#define ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace ABC::Chess::Timeline::Unity
{
	inline static constexpr unsigned int ChsFixedCameraClip_TypeDefinitionIndex = 9537;

	class ChsFixedCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::FAED0374422E783A* BlendCurve; // 0x18
		::System::Boolean GameCameraData; // 0x20
		::System::Byte _padding0[0x3];
		::ABC::Chess::Timeline::Unity::FixedCameraData CameraData; // 0x24

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP__CTOR_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSFIXEDCAMERACLIP_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}
	};
}
