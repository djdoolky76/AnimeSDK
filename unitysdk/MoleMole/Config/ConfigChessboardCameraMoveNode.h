#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16530830)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x165308F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_TypeDefinitionIndex = 44674;

	class ConfigChessboardCameraMoveNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::FloatUISpecialNum* MoveToCenterDuration; // 0x18
		::MoleMole::Config::StringUISpecialNum* StretchKey; // 0x20
		::MoleMole::Config::IntUISpecialNum* MoveType; // 0x28
		::MoleMole::Config::AnimationCurveUISpecialNum* MoveToCenterCurve; // 0x30
		::MoleMole::Config::StringUISpecialNum* PredefinedKey; // 0x38
		::System::Boolean UseCustomZ; // 0x40
		::System::Boolean UseFixedViewPriority; // 0x41
		::System::Boolean EnableAudio; // 0x42
		::System::Boolean IgnoreIfTargetInFocusRange; // 0x43
		::MoleMole::Vector2Int PieceIndexOffset; // 0x44
		::MoleMole::Config::ConfigSetSection_Order ChessboardOrder; // 0x4C
		::UnityEngine::Vector3 RelativePosition; // 0x50
		::UnityEngine::Vector3 DesignatedPos; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
