#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_APPLYOFFSET_OFFSET UNITYSDK_OFFSET(0x13128C20)
#define MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_GET_LOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x13128BA0)
#define MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x13128D60)
#define MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_SETLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x13128BC0)
#define MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13128F60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CinemachineProceduralOffset_TypeDefinitionIndex = 92410;

	class CinemachineProceduralOffset : public ::Cinemachine::CinemachineExtension
	{
	public:
		::UnityEngine::Vector3 BENOIMLCENN; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LocalOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_GET_LOCALOFFSET_OFFSET))(this);
		}

		::System::Void SetLocalOffset(::UnityEngine::Vector3 NPCNEFKDHBL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_SETLOCALOFFSET_OFFSET))(this, NPCNEFKDHBL);
		}

		static ::System::Void ApplyOffset(::Cinemachine::CameraState& JKBLDFBGBPK, ::UnityEngine::Vector3 BECNDHNDHCJ)
		{
			return ((::System::Void(*)(::Cinemachine::CameraState&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_APPLYOFFSET_OFFSET))(JKBLDFBGBPK, BECNDHNDHCJ);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* ADCMOECNMLG, ::Cinemachine::CinemachineCore_Stage FKDONKGGAIF, ::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CINEMACHINEPROCEDURALOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET))(this, ADCMOECNMLG, FKDONKGGAIF, JKBLDFBGBPK, PMNLNNGEIFM);
		}
	};
}
