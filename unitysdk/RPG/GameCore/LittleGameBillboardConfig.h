#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBillboardConfig; }

#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE250)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDED0)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DDEE0)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DDE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBillboardConfig_TypeDefinitionIndex = 18834;

	class LittleGameBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsBillboard; // 0x10
		::System::Boolean ShowName; // 0x11
		::System::Boolean ShowIcon; // 0x12
		::System::Boolean ShowBubble; // 0x13
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 MapIconID; // 0x28
		::System::Boolean IsOverrideShowDistance; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single OverrideShowDistance; // 0x30
		static ::RPG::GameCore::LittleGameBillboardConfig** StaticGet_DefaultBillboardConfig()
		{
			return (::RPG::GameCore::LittleGameBillboardConfig**)UnitySDK::FromName("RPG.GameCore", "LittleGameBillboardConfig")->GetStaticField(0x33460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
