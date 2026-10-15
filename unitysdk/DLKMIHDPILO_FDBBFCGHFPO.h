#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET UNITYSDK_OFFSET(0xF89DD90)

inline static constexpr unsigned int DLKMIHDPILO_FDBBFCGHFPO_TypeDefinitionIndex = 76807;

	class DLKMIHDPILO_FDBBFCGHFPO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PECGKNAAKOO; // 0x10
		::System::Boolean NPHBBCAGDLL; // 0x1C
		::System::Boolean OEKKHDBJHCO; // 0x1D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 NCLKEBCHNOG; // 0x20
		::UnityEngine::Quaternion MECHOCFGMKF; // 0x2C
		::UnityEngine::Quaternion DDJBFFBNIGI; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET))(this);
		}

	};
