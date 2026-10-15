#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_SetAnimatorParam; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA56D10)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA56D20)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA56CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_SetAnimatorParam_TypeDefinitionIndex = 21314;

	class ST_Side_Hipplen_SetAnimatorParam : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::System::Boolean BoolValue; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single FloatValue; // 0x28
		::System::Int32 IntValue; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
