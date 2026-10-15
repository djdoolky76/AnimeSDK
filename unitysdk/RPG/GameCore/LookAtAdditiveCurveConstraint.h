#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAxis.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LookAtAdditiveCurveConstraint; }

#define RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6A60)
#define RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C66A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookAtAdditiveCurveConstraint_TypeDefinitionIndex = 21913;

	class LookAtAdditiveCurveConstraint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean StopTrace; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x14
		::System::Single BlendInTime; // 0x18
		::System::Single BlendOutTime; // 0x1C
		::RPG::GameCore::EAxis Axis; // 0x20
		::System::Int32 UseSpineNum; // 0x24
		::System::Single PitchUp; // 0x28
		::System::Single PitchDown; // 0x2C
		::System::Single YawLeft; // 0x30
		::System::Single YawRight; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LookAtAdditiveCurveConstraint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
