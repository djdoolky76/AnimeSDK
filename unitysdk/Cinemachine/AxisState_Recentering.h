#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_AXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET UNITYSDK_OFFSET(0x2A5E9F0)
#define CINEMACHINE_AXISSTATE_RECENTERING_DORECENTERING_OFFSET UNITYSDK_OFFSET(0x2A5EA20)
#define CINEMACHINE_AXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET UNITYSDK_OFFSET(0x2A5EBF0)
#define CINEMACHINE_AXISSTATE_RECENTERING_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2A5EC20)
#define CINEMACHINE_AXISSTATE_RECENTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x2A5EC40)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_Recentering_TypeDefinitionIndex = 18345;

	struct alignas(4) AxisState_Recentering
	{
		::System::Boolean m_enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single m_WaitTime; // 0x14
		::System::Single m_RecenteringTime; // 0x18
		::System::Single m_LastUpdateTime; // 0x1C
		::System::Single mLastAxisInputTime; // 0x20
		::System::Single mRecenteringVelocity; // 0x24
		::System::Int32 m_LegacyHeadingDefinition; // 0x28
		::System::Int32 m_LegacyVelocityFilterStrength; // 0x2C

		::System::Void _ctor(::System::Boolean FBF3AC291087F95C, ::System::Single A0A46CACA1CE8C82, ::System::Single E75B450FCFADA03D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING__CTOR_OFFSET))(this, FBF3AC291087F95C, A0A46CACA1CE8C82, E75B450FCFADA03D);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_VALIDATE_OFFSET))(this);
		}

		::System::Void CancelRecentering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET))(this);
		}

		/*
		::System::Void DoRecentering(::Cinemachine::AxisState& F24A60394CB7A82C, ::System::Single EB5670302F34D4B7, ::System::Single F9AB56057A3C9CAE)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_DORECENTERING_OFFSET))(this, F24A60394CB7A82C, EB5670302F34D4B7, F9AB56057A3C9CAE);
		}
		*/

		::System::Boolean LegacyUpgrade(::System::Int32& E7C2F618C4BAF5CB, ::System::Int32& AB7DF4B62AF699F5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET))(this, E7C2F618C4BAF5CB, AB7DF4B62AF699F5);
		}
	};
}
