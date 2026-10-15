#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitFrame; }

#define RPG_GAMECORE_WAITFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC992F0)
#define RPG_GAMECORE_WAITFRAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC99300)
#define RPG_GAMECORE_WAITFRAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC992B0)

namespace RPG::GameCore
{
	class WaitFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 WaitFrameCount; // 0x18
		::System::Boolean RealFrame; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFrame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
