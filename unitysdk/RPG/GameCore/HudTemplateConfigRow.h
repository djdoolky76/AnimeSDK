#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HudTemplateConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_HUDTEMPLATECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7743A0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D773D20)

namespace RPG::GameCore
{
	class HudTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* LockInputActionName; // 0x10
		::Il2CppArray<::RPG::GameCore::GotoType>* LockGotoTypeList; // 0x18
		::Il2CppArray<::RPG::GameCore::HudType>* HideHudUINodeList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 ActionOperationSetID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HudTemplateConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HudTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
