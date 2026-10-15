#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CCGEEGJKPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD380)

	class CCGEEGJKPHC : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 IGDPLGAGAHF; // 0x10
		::UnityEngine::Vector3 GIGBFNIOCPF; // 0x1C
		::UnityEngine::Vector3 MKILIBDLKAP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGEEGJKPHC_CTOR_OFFSET))(this);
		}

	};
