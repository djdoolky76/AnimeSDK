#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMissileMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B610)
#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B620)
#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissileMoveConfig_TypeDefinitionIndex = 16693;

	class FiveDimMissileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Boolean OverrideJumpParams; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single TrampolineJumpHeight; // 0x50
		::System::Byte _padding1[0x4];
		::System::String* OnBurstEvent; // 0x58
		::System::String* GlobalMoveHitEvent; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMissileMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMissileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMissileMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMissileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
