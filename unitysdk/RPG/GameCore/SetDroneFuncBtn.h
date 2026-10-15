#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDroneFuncBtn; }

#define RPG_GAMECORE_SETDRONEFUNCBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9EFA0)
#define RPG_GAMECORE_SETDRONEFUNCBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9EFB0)
#define RPG_GAMECORE_SETDRONEFUNCBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9EF70)

namespace RPG::GameCore
{
	class SetDroneFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Value; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* CustomValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
