#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMusicVisualRenderEnable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8FCD0)
#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8FD00)
#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8FC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMusicVisualRenderEnable_TypeDefinitionIndex = 22312;

	class SetMusicVisualRenderEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x1C
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMusicVisualRenderEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMusicVisualRenderEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMusicVisualRenderEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMusicVisualRenderEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
