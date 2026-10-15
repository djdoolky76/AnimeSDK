#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDragonDogPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA610)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BA620)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BA5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogPropSpawnerParam_TypeDefinitionIndex = 18583;

	class FiveDimDragonDogPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean FaceLeft; // 0x10
		::System::Boolean EnableOverrideMoveSpeed; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single MoveSpeedOverride; // 0x14
		::System::Boolean HasAttachEntity; // 0x18
		::System::Byte _padding1[0x7];
		::System::String* AttachPresetName; // 0x20
		::System::String* AttachPointName; // 0x28
		::System::String* BindLevelVarName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
