#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KFOLAGEHKGF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB89D20)
#define KFOLAGEHKGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89DB0)

inline static constexpr unsigned int KFOLAGEHKGF_TypeDefinitionIndex = 43409;

	class KFOLAGEHKGF : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x10
		::System::Single IFEPJHGNCOI; // 0x1C
		::UnityEngine::Vector3 NAAIGCBNBHM; // 0x20
		::UnityEngine::Vector3 DPKMOFJOHKB; // 0x2C
		::System::Single OIKGNPCGODF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLAGEHKGF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLAGEHKGF_CLEAR_OFFSET))(this);
		}

	};
