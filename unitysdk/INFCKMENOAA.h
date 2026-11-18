#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define INFCKMENOAA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19436D30)
#define INFCKMENOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x19436CD0)

inline static constexpr unsigned int INFCKMENOAA_TypeDefinitionIndex = 58860;

class INFCKMENOAA : public ::System::Object
{
public:
	::System::Single OJLNDNBCFMD; // 0x10
	::System::Single AEPNLNFIKPD; // 0x14
	::UnityEngine::Vector2 PENPHPCBEPL; // 0x18
	::System::Boolean PCKIHMLPCCL; // 0x20
	::System::Boolean LELCCGJEGBO; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFCKMENOAA__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFCKMENOAA_NPOLNFDBOOD_OFFSET))(this);
	}
};
