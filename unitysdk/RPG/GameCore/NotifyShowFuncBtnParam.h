#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1926BFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyShowFuncBtnParam_TypeDefinitionIndex = 54431;

	class NotifyShowFuncBtnParam : public ::System::Object
	{
	public:
		::System::String* OverrideIconPath; // 0x10
		::System::String* CustomEvent; // 0x18
		::RPG::GameCore::GameEntity* OwnerEntity; // 0x20
		::RPG::GameCore::PuzzleFunc FuncType; // 0x28
		::System::Int32 MissionID; // 0x2C
		::System::Single CDDuration; // 0x30
		::System::Boolean ShowBtnFuncHint; // 0x34
		::System::Boolean ShowBtnEffect; // 0x35
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID BtnHintTextID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYSHOWFUNCBTNPARAM_CTOR_OFFSET))(this);
		}

	};
}
