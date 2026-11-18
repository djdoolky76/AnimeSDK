#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/MoleMole/ConfigCameraPosType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AMPJDLCELCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6F2170)

inline static constexpr unsigned int AMPJDLCELCJ_TypeDefinitionIndex = 60384;

struct alignas(4) AMPJDLCELCJ
{
	::MoleMole::ConfigCameraPosType EFLLCMEOBBE; // 0x10
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x14
	::UnityEngine::Quaternion IFEFGIHOKOC; // 0x20
	::System::Int32 KKIAJMPJAJE; // 0x30
	::Cinemachine::LensSettings ODHNCMOIPOF; // 0x34

	::System::Void _ctor(::MoleMole::ConfigCameraPosType IJNIDDOECJK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCameraPosType))((::PBYTE)hIl2Cpp + AMPJDLCELCJ__CTOR_OFFSET))(this, IJNIDDOECJK);
	}
};
