#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINESHOTBASE_BJONHDDEBKE_OFFSET UNITYSDK_OFFSET(0xDF9D820)
#define CINEMACHINE_CINEMACHINESHOTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDF9D9D0)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0xDCEBD10)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDF9D400)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDF9D4F0)
#define CINEMACHINE_CINEMACHINESHOTBASE_IEMGKLJACKC_OFFSET UNITYSDK_OFFSET(0xDCEB2D0)
#define CINEMACHINE_CINEMACHINESHOTBASE_IMNMEODDPJM_OFFSET UNITYSDK_OFFSET(0xDF9D960)
#define CINEMACHINE_CINEMACHINESHOTBASE_LANBHJGNMFI_OFFSET UNITYSDK_OFFSET(0xDF9D8F0)
#define CINEMACHINE_CINEMACHINESHOTBASE_LCMAHACIANG_OFFSET UNITYSDK_OFFSET(0xDF9D8B0)
#define CINEMACHINE_CINEMACHINESHOTBASE_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xDF9D5D0)
#define CINEMACHINE_CINEMACHINESHOTBASE_PBEBJOBBAAP_OFFSET UNITYSDK_OFFSET(0xDCEB390)
#define CINEMACHINE_CINEMACHINESHOTBASE_PHELINDJOBI_OFFSET UNITYSDK_OFFSET(0xDCEB340)
#define CINEMACHINE_CINEMACHINESHOTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xDF9D500)
#define CINEMACHINE_CINEMACHINESHOTBASE_SET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0xDCEBD20)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineShotBase_TypeDefinitionIndex = 49643;

	class CinemachineShotBase : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::System::Boolean _CalculateInRuntime_k__BackingField; // 0x50
		::System::Byte _padding0[0x7];
		::Cinemachine::CameraState LLBADFLDEIA; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CalculateInRuntime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_CALCULATEINRUNTIME_OFFSET))(this);
		}

		::System::Void set_CalculateInRuntime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_SET_CALCULATEINRUNTIME_OFFSET))(this, a1);
		}

		::System::Int32 PBEBJOBBAAP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_PBEBJOBBAAP_OFFSET))(this);
		}

		::System::Int32 PHELINDJOBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_PHELINDJOBI_OFFSET))(this);
		}

		::System::Single IEMGKLJACKC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_IEMGKLJACKC_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_STAGE_OFFSET))(this);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCMAHACIANG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_LCMAHACIANG_OFFSET))(this);
		}

		::System::Double LANBHJGNMFI(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_LANBHJGNMFI_OFFSET))(this, a1);
		}

		::System::Double IMNMEODDPJM(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_IMNMEODDPJM_OFFSET))(this, a1);
		}

		::System::Void BJONHDDEBKE(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_BJONHDDEBKE_OFFSET))(this, a1);
		}

	};
}
