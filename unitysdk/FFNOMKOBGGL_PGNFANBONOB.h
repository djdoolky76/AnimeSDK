#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFNOMKOBGGL_RtUnitHpBarStyle.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FFNOMKOBGGL_PGNFANBONOB_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2E75F30)

	struct alignas(4) FFNOMKOBGGL_PGNFANBONOB
	{
		::FFNOMKOBGGL_RtUnitHpBarStyle CFNAKPADAEB; // 0x10
		::UnityEngine::Vector3 FKKMPFBKGNN; // 0x14
		::System::Single GGHMIADFJHH; // 0x20
		/*
		::System::Int32 CompareTo(::FFNOMKOBGGL_PGNFANBONOB a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FFNOMKOBGGL_PGNFANBONOB))((::PBYTE)hIl2Cpp + FFNOMKOBGGL_PGNFANBONOB_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
