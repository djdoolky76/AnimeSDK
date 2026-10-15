#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUINodeOpen; }
namespace System { class String; }

#define RPG_GAMECORE_WAITUINODEOPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA4A00)
#define RPG_GAMECORE_WAITUINODEOPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA4A10)
#define RPG_GAMECORE_WAITUINODEOPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA49D0)

namespace RPG::GameCore
{
	class WaitUINodeOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* PathPC; // 0x28
		::System::Boolean SkipCheck; // 0x30
		::System::Boolean Reverse; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUINodeOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUINodeOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUINodeOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUINodeOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
