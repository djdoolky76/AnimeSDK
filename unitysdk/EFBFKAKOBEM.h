#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EFBFKAKOBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA05390)

inline static constexpr unsigned int EFBFKAKOBEM_TypeDefinitionIndex = 43754;

	class EFBFKAKOBEM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AFNNIBFPEHB; // 0x10
		::System::Int32 KJJEEBJNAAA; // 0x1C
		::System::Int32 NDKEGAADDHI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBFKAKOBEM_CTOR_OFFSET))(this);
		}

	};
