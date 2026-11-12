#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIIKADDJLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC20F390)

inline static constexpr unsigned int MIIKADDJLGJ_TypeDefinitionIndex = 58277;

	class MIIKADDJLGJ : public ::System::Object
	{
	public:
		::System::Single EBPMNLLMGAE; // 0x10
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x14
		::UnityEngine::Vector3 JLDDGFKGHPA; // 0x20
		::System::Single BFJJPCCEIPB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIKADDJLGJ_CTOR_OFFSET))(this);
		}

	};
