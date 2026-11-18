#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HPCONFEPCPD_DFEHBCCIOPE_KDJDGAHFCOH_OFFSET UNITYSDK_OFFSET(0x17A63470)
#define HPCONFEPCPD_DFEHBCCIOPE_NMOKOFCACJA_OFFSET UNITYSDK_OFFSET(0x17A63480)
#define HPCONFEPCPD_DFEHBCCIOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A63460)

inline static constexpr unsigned int HPCONFEPCPD_DFEHBCCIOPE_TypeDefinitionIndex = 90930;

class HPCONFEPCPD_DFEHBCCIOPE : public ::System::Object
{
public:
	::UnityEngine::Vector3 LCAIDPLHOKL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DFEHBCCIOPE__CTOR_OFFSET))(this);
	}

	::System::Single KDJDGAHFCOH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DFEHBCCIOPE_KDJDGAHFCOH_OFFSET))(this);
	}

	::System::Single NMOKOFCACJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DFEHBCCIOPE_NMOKOFCACJA_OFFSET))(this);
	}
};
