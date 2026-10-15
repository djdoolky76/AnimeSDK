#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropDecalParam; }

#define RPG_GAMECORE_LEVELPROPDECALPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CAAE0)
#define RPG_GAMECORE_LEVELPROPDECALPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7CAAF0)
#define RPG_GAMECORE_LEVELPROPDECALPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CAAA0)

namespace RPG::GameCore
{
	class LevelPropDecalParam : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::System::UInt32 DecalID; // 0x10
		::System::Boolean IsFadeIn; // 0x14
		::System::Boolean IsFadeOut; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropDecalParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropDecalParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropDecalParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropDecalParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
