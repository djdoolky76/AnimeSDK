#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenChimeraWaveConfig; }
namespace RPG::GameCore { class HipplenCountingChimeraMiniGameConfig; }
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76B120)
#define RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76ADD0)

namespace RPG::GameCore
{
	class HipplenCountingChimeraMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TimelinePath; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenChimeraWaveConfig*>* ChimeraWaveList; // 0x18
		::System::UInt32 QuizChimeraID; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* InCorrectAnswers; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x38
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* LoadCharacterList; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenCountingChimeraMiniGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenCountingChimeraMiniGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
