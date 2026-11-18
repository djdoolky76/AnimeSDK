#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BEJOOLGKBBD_CKFMJHHKLJL_OFFSET UNITYSDK_OFFSET(0x14385F20)
#define BEJOOLGKBBD_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x143861F0)
#define BEJOOLGKBBD_EJAANMAEHON_OFFSET UNITYSDK_OFFSET(0x143861E0)
#define BEJOOLGKBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x14385F10)

inline static constexpr unsigned int BEJOOLGKBBD_TypeDefinitionIndex = 66049;

class BEJOOLGKBBD : public ::System::Object
{
public:
	::System::Boolean MHPABKFDIOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJOOLGKBBD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CKFMJHHKLJL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJOOLGKBBD_CKFMJHHKLJL_OFFSET))(this);
	}

	::System::Void EJAANMAEHON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEJOOLGKBBD_EJAANMAEHON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJOOLGKBBD_DILABNGJPMN_OFFSET))(this);
	}
};
