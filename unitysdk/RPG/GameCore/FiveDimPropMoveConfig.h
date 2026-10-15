#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9520)
#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D5000)
#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D4230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropMoveConfig_TypeDefinitionIndex = 16687;

	class FiveDimPropMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PhysicsPrefab; // 0x18
		::System::Single ColliderSizeX; // 0x20
		::System::Single ColliderSizeY; // 0x24
		::System::Single MaxSpeed; // 0x28
		::System::Single RotationDamping; // 0x2C
		::System::Single DestroyDitherDuration; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::FiveDimPropBakedMoveConfig*>* BakedConfigs; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
