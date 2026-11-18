#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;

#define FBMFHPMONGC_BNAIPBIALGM_ADDFECPHFML_OFFSET UNITYSDK_OFFSET(0x1418F0F0)
#define FBMFHPMONGC_BNAIPBIALGM_HOOMJEJONCK_OFFSET UNITYSDK_OFFSET(0x1418F150)
#define FBMFHPMONGC_BNAIPBIALGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1418F0E0)

inline static constexpr unsigned int FBMFHPMONGC_BNAIPBIALGM_TypeDefinitionIndex = 50494;

class FBMFHPMONGC_BNAIPBIALGM : public ::System::Object
{
public:
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::System::Single AMFOADOGKKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BNAIPBIALGM__CTOR_OFFSET))(this);
	}

	::System::Boolean ADDFECPHFML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BNAIPBIALGM_ADDFECPHFML_OFFSET))(this);
	}

	::System::Single HOOMJEJONCK(::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BNAIPBIALGM_HOOMJEJONCK_OFFSET))(this, CKPGOKHECCH);
	}
};
