#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;

#define ABJMPKENACD_MCHLABNGIPF_ADDFECPHFML_OFFSET UNITYSDK_OFFSET(0x16D5E240)
#define ABJMPKENACD_MCHLABNGIPF_HOOMJEJONCK_OFFSET UNITYSDK_OFFSET(0x16D5DC30)
#define ABJMPKENACD_MCHLABNGIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5DC20)

inline static constexpr unsigned int ABJMPKENACD_MCHLABNGIPF_TypeDefinitionIndex = 88608;

class ABJMPKENACD_MCHLABNGIPF : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::System::Single AMFOADOGKKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MCHLABNGIPF__CTOR_OFFSET))(this);
	}

	::System::Single HOOMJEJONCK(::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJMPKENACD_MCHLABNGIPF_HOOMJEJONCK_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Boolean ADDFECPHFML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_MCHLABNGIPF_ADDFECPHFML_OFFSET))(this);
	}
};
