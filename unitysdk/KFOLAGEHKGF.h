#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KFOLAGEHKGF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA6AA60)
#define KFOLAGEHKGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6AAF0)

inline static constexpr unsigned int KFOLAGEHKGF_TypeDefinitionIndex = 44390;

	class KFOLAGEHKGF : public ::System::Object
	{
	public:
		::System::Single OIKGNPCGODF; // 0x10
		::UnityEngine::Vector3 DPKMOFJOHKB; // 0x14
		::UnityEngine::Vector3 NAAIGCBNBHM; // 0x20
		::System::Single IFEPJHGNCOI; // 0x2C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLAGEHKGF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLAGEHKGF_CLEAR_OFFSET))(this);
		}

	};
