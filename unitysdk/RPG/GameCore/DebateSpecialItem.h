#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebateSpecialItem; }
namespace System { class String; }

#define RPG_GAMECORE_DEBATESPECIALITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5D70)
#define RPG_GAMECORE_DEBATESPECIALITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F5C40)

namespace RPG::GameCore
{
	class DebateSpecialItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TriggerCustomString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESPECIALITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateSpecialItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateSpecialItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESPECIALITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
