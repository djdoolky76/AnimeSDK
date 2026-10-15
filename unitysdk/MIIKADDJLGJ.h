#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIIKADDJLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB953F40)

inline static constexpr unsigned int MIIKADDJLGJ_TypeDefinitionIndex = 57050;

	class MIIKADDJLGJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x10
		::UnityEngine::Vector3 JLDDGFKGHPA; // 0x1C
		::System::Single EBPMNLLMGAE; // 0x28
		::System::Single BFJJPCCEIPB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIKADDJLGJ_CTOR_OFFSET))(this);
		}

	};
