#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12B43160)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B43150)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCallCameraEffectNode_TypeDefinitionIndex = 62393;

	class MainCityChatCallCameraEffectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* effectKey; // 0x18
		::System::Boolean isOneFrameEnd; // 0x20
		::System::Boolean isEndByKey; // 0x21
		::System::Boolean isInterruptType; // 0x22
		::System::Byte _padding0[0x1];
		::MoleMole::Config::ScreenEffectType effectType; // 0x24
		::MoleMole::Timeline::CallCameraEffectActionType actionType; // 0x28
		::MoleMole::Config::ShaderCustomType shaderCustomType; // 0x2C
		::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType callType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
