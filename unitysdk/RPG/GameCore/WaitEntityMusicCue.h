#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitEntityMusicCue; }

#define RPG_GAMECORE_WAITENTITYMUSICCUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC972E0)
#define RPG_GAMECORE_WAITENTITYMUSICCUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC972F0)
#define RPG_GAMECORE_WAITENTITYMUSICCUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC972A0)

namespace RPG::GameCore
{
	class WaitEntityMusicCue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MusicCueName; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCueHit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityMusicCue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityMusicCue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityMusicCue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityMusicCue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYMUSICCUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
