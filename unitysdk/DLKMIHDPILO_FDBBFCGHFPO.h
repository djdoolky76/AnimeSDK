#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET UNITYSDK_OFFSET(0x106133B0)

inline static constexpr unsigned int DLKMIHDPILO_FDBBFCGHFPO_TypeDefinitionIndex = 79142;

	class DLKMIHDPILO_FDBBFCGHFPO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PECGKNAAKOO; // 0x10
		::UnityEngine::Quaternion DDJBFFBNIGI; // 0x1C
		::UnityEngine::Vector3 NCLKEBCHNOG; // 0x2C
		::UnityEngine::Quaternion MECHOCFGMKF; // 0x38
		::System::Boolean NPHBBCAGDLL; // 0x48
		::System::Boolean OEKKHDBJHCO; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET))(this);
		}

	};
