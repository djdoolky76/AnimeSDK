#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B36E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 73525;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::System::String* CustomUIModelAttachPointName; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::FloatMessageType MessageType; // 0x20
		::System::Single DelayTime; // 0x24
		::RPG::MVector3 CustomOffset; // 0x28
		::System::Boolean UseFixedPosition; // 0x34
		::System::Boolean ForceVisible; // 0x35
		::System::Boolean ScreenSpaceFloatMsg; // 0x36
		::System::Boolean IsShowUIMessageFromModel; // 0x37
		::System::Single InternalTime; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY_CTOR_OFFSET))(this);
		}

	};
}
