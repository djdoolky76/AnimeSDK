#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

inline static constexpr unsigned int PFGDFMBOOLK_TSC_CRPGroup_TypeDefinitionIndex = 69815;

	struct alignas(4) PFGDFMBOOLK_TSC_CRPGroup
	{
		::UnityEngine::Vector4 _TSC_ControllerPosA; // 0x10
		::UnityEngine::Vector4 _TSC_ControllerDirA; // 0x20
		::UnityEngine::Vector4 _TSC_ControllerPosB; // 0x30
		::UnityEngine::Vector4 _TSC_ControllerDirB; // 0x40
		::UnityEngine::Vector4 _TSC_ControllerPosC; // 0x50
		::UnityEngine::Vector4 _TSC_ControllerDirC; // 0x60
	};
