#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A3760)

	class DLKMIHDPILO_FDBBFCGHFPO : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion MECHOCFGMKF; // 0x10
		::System::Boolean OEKKHDBJHCO; // 0x20
		::System::Boolean NPHBBCAGDLL; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 PECGKNAAKOO; // 0x24
		::UnityEngine::Quaternion DDJBFFBNIGI; // 0x30
		::UnityEngine::Vector3 NCLKEBCHNOG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_FDBBFCGHFPO_CTOR_OFFSET))(this);
		}

	};
