#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUITabOpen; }
namespace System { class String; }

#define RPG_GAMECORE_WAITUITABOPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA4DF0)
#define RPG_GAMECORE_WAITUITABOPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA4E00)
#define RPG_GAMECORE_WAITUITABOPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA4DB0)

namespace RPG::GameCore
{
	class WaitUITabOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TabPath; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* TabPathPC; // 0x28
		::System::UInt32 Index; // 0x30
		::System::Boolean IsOpen; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUITabOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUITabOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUITabOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUITabOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUITABOPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
