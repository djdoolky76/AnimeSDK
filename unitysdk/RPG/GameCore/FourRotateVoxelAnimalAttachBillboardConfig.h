#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelAnimalAttachBillboardConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ECB10)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ECB20)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ECAE0)

namespace RPG::GameCore
{
	class FourRotateVoxelAnimalAttachBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsAnimalAttachBillboard; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* AttachPointName; // 0x18
		::System::String* BindLevelVarName; // 0x20
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x28
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALATTACHBILLBOARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
