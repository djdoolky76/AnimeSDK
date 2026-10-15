#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoveParamModifierFloat; }

#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FA30)
#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69FA40)
#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69FA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveParamModifierFloat_TypeDefinitionIndex = 18551;

	class FiveDimMoveParamModifierFloat : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Modify; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Value; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveParamModifierFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveParamModifierFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveParamModifierFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveParamModifierFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
