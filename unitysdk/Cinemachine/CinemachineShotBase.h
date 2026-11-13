#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINESHOTBASE_BJONHDDEBKE_OFFSET UNITYSDK_OFFSET(0x1991ECC0)
#define CINEMACHINE_CINEMACHINESHOTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1991E870)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0x1991E880)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1991E8A0)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1991E990)
#define CINEMACHINE_CINEMACHINESHOTBASE_IEMGKLJACKC_OFFSET UNITYSDK_OFFSET(0x1991DDC0)
#define CINEMACHINE_CINEMACHINESHOTBASE_IMNMEODDPJM_OFFSET UNITYSDK_OFFSET(0x1991DE80)
#define CINEMACHINE_CINEMACHINESHOTBASE_LANBHJGNMFI_OFFSET UNITYSDK_OFFSET(0x1991ED90)
#define CINEMACHINE_CINEMACHINESHOTBASE_LCMAHACIANG_OFFSET UNITYSDK_OFFSET(0x1991ED50)
#define CINEMACHINE_CINEMACHINESHOTBASE_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1991EA70)
#define CINEMACHINE_CINEMACHINESHOTBASE_PBEBJOBBAAP_OFFSET UNITYSDK_OFFSET(0x1991DEF0)
#define CINEMACHINE_CINEMACHINESHOTBASE_PHELINDJOBI_OFFSET UNITYSDK_OFFSET(0x1991DE30)
#define CINEMACHINE_CINEMACHINESHOTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1991E9A0)
#define CINEMACHINE_CINEMACHINESHOTBASE_SET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0x1991E890)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineShotBase_TypeDefinitionIndex = 50719;

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
