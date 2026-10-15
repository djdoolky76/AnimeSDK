#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTextJoinValue; }
namespace System { class String; }

#define RPG_GAMECORE_SETTEXTJOINVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7830)
#define RPG_GAMECORE_SETTEXTJOINVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC7840)
#define RPG_GAMECORE_SETTEXTJOINVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7800)

namespace RPG::GameCore
{
	class SetTextJoinValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTextJoinValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTextJoinValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
