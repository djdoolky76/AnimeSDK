#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AHNMKLLNGKH_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x17DD84D0)
#define AHNMKLLNGKH_EJAANMAEHON_OFFSET UNITYSDK_OFFSET(0x17DD84C0)
#define AHNMKLLNGKH_LDDBIHGBDFC_OFFSET UNITYSDK_OFFSET(0x17DD84E0)
#define AHNMKLLNGKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD84B0)

inline static constexpr unsigned int AHNMKLLNGKH_TypeDefinitionIndex = 48973;

class AHNMKLLNGKH : public ::System::Object
{
public:
	::System::Boolean MHPABKFDIOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNMKLLNGKH__CTOR_OFFSET))(this);
	}

	::System::Void EJAANMAEHON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHNMKLLNGKH_EJAANMAEHON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNMKLLNGKH_DILABNGJPMN_OFFSET))(this);
	}

	::UnityEngine::Vector3 LDDBIHGBDFC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNMKLLNGKH_LDDBIHGBDFC_OFFSET))(this);
	}
};
