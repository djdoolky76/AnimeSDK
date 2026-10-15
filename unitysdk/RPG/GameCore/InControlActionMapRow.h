#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InControlActionMapRow; }
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLACTIONMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D782DD0)
#define RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D782640)

namespace RPG::GameCore
{
	class InControlActionMapRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FuncGotoIDList; // 0x10
		::System::String* actionName; // 0x18
		::Il2CppArray<::System::String*>* defaultInControlTypes; // 0x20
		::System::String* defaultKey; // 0x28
		::System::String* defaultMouseType; // 0x30
		::Il2CppArray<::System::UInt32>* actionTypeList; // 0x38
		::RPG::Client::TextID actionTextmapID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InControlActionMapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InControlActionMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
