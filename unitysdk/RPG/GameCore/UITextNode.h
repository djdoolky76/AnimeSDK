#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_UITEXTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC720B0)
#define RPG_GAMECORE_UITEXTNODE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC71E50)

namespace RPG::GameCore
{
	class UITextNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SDFPath; // 0x10
		::System::String* TextPath; // 0x18
		::RPG::Client::TextID TextContent; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x30
		::RPG::GameCore::DynamicFloat* TextDynamicValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITEXTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::UITextNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITEXTNODE_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
