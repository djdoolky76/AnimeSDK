#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IINMGKKBIME;
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xE728560)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE7298B0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE7298C0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xE7299C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractionTrigger_ButtonParam_TypeDefinitionIndex = 57523;

	class PropInteractionTrigger_ButtonParam : public ::System::Object
	{
	public:
		::IINMGKKBIME* _Info; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::PropInteractionTrigger_ButtonParam* Create(::IINMGKKBIME* a1)
		{
			return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::IINMGKKBIME*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_CREATE_OFFSET))(a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_BUTTONPARAM_GET_TEXTID_OFFSET))(this);
		}

	};
}
