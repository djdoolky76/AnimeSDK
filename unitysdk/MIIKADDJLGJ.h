#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIIKADDJLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB959FF0)

	class MIIKADDJLGJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 JLDDGFKGHPA; // 0x10
		::System::Single BFJJPCCEIPB; // 0x1C
		::System::Single EBPMNLLMGAE; // 0x20
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIKADDJLGJ_CTOR_OFFSET))(this);
		}

	};
