#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define BGCURVEPCG_POWERLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xB178FE0)

	class BGCurvePCG_PowerLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEPCG_POWERLINE_CTOR_OFFSET))(this);
		}

	};
