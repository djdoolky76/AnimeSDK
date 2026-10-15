#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NHPPEMJONFE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A0E50)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_NHPPEMJONFE_TypeDefinitionIndex = 52021;

	class BGCurvePCG_CurveScatter_NHPPEMJONFE : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x10
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x1C
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NHPPEMJONFE_CTOR_OFFSET))(this);
		}

	};
}
