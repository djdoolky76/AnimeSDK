#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueValueChangeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueValueChangeInfo; }

#define RPG_GAMECORE_ROGUEVALUECHANGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA459E0)
#define RPG_GAMECORE_ROGUEVALUECHANGEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA458A0)

namespace RPG::GameCore
{
	class RogueValueChangeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueValueChangeType ChangeType; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double ChangeValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueValueChangeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueValueChangeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
