#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGeckoPropSpawnerParam; }

#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D694120)
#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D694130)
#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6940F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGeckoPropSpawnerParam_TypeDefinitionIndex = 18579;

	class FiveDimGeckoPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean FaceLeft; // 0x10
		::System::Boolean OverrideMoveSpeed; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single MoveSpeed; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
