#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopMoveObject; }
namespace System { class String; }

#define RPG_GAMECORE_LOOPMOVEOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8790)
#define RPG_GAMECORE_LOOPMOVEOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopMoveObject_TypeDefinitionIndex = 20429;

	class LoopMoveObject : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* AvatarID; // 0x18
		::System::Single MoveSpeed; // 0x20
		::System::Single MoveDelay; // 0x24
		::RPG::MVector3 MoveDirection; // 0x28
		::RPG::MVector3 PositionOffset; // 0x34
		::RPG::MVector3 RotationOffset; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPMOVEOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopMoveObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopMoveObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPMOVEOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
