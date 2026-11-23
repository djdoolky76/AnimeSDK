#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/ChessGame/ChessAnimMonoPluginConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Transform; }

#define ABC_CHESSGAME_CHESSANIMTARGETIKPLUGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ChessAnimTargetIKPluginConfig_TypeDefinitionIndex = 10115;

	class ChessAnimTargetIKPluginConfig : public ::ABC::ChessGame::ChessAnimMonoPluginConfig
	{
	public:
		::System::String* TargetAnimName; // 0x10
		::UnityEngine::Transform* Model; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Bones; // 0x20
		::UnityEngine::FAED0374422E783A* AnimToIKBlendCurve; // 0x28
		::UnityEngine::Vector3 InitTarget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMTARGETIKPLUGINCONFIG__CTOR_OFFSET))(this);
		}
	};
}
