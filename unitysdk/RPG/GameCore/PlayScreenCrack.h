#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayScreenCrack; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSCREENCRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D930DB0)
#define RPG_GAMECORE_PLAYSCREENCRACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D930DC0)
#define RPG_GAMECORE_PLAYSCREENCRACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D930D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenCrack_TypeDefinitionIndex = 20888;

	class PlayScreenCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ScreenCrackUI; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::System::Boolean ExecuteOnSkip; // 0x30
		::System::Boolean IsOnlyEffect; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenCrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayScreenCrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
