#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xD1772C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 73526;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::System::String* CustomUIModelAttachPointName; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::System::Single InternalTime; // 0x20
		::RPG::GameCore::FloatMessageType MessageType; // 0x24
		::System::Boolean ScreenSpaceFloatMsg; // 0x28
		::System::Boolean UseFixedPosition; // 0x29
		::System::Boolean ForceVisible; // 0x2A
		::System::Boolean IsShowUIMessageFromModel; // 0x2B
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextID; // 0x30
		::RPG::MVector3 CustomOffset; // 0x40
		::System::Single DelayTime; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY_CTOR_OFFSET))(this);
		}

	};
}
