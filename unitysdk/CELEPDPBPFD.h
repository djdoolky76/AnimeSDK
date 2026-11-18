#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class CIFCJFHMGBB;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace UnityEngine { class Transform; }

#define CELEPDPBPFD_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x16A141E0)
#define CELEPDPBPFD__CTOR_OFFSET UNITYSDK_OFFSET(0x78F810)

inline static constexpr unsigned int CELEPDPBPFD_TypeDefinitionIndex = 45059;

struct alignas(8) CELEPDPBPFD
{
	::CIFCJFHMGBB* BFOFLHGDGCN; // 0x10
	::UnityEngine::Transform* IMDDOCDPMMO; // 0x18
	::MoleMole::Vehicle::VehicleTestCameraMono* CEJENBBHBBG; // 0x20
	::System::Single KKBHNBFOLHN; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + CELEPDPBPFD__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData CELHLLIAIKB(::CELEPDPBPFD& IPMMCGDMODG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::CELEPDPBPFD&))((::PBYTE)hIl2Cpp + CELEPDPBPFD_CELHLLIAIKB_OFFSET))(IPMMCGDMODG);
	}
	*/
};
