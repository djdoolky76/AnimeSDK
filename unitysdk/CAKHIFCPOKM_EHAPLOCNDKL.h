#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CAKHIFCPOKM_EHAPLOCNDKL_BMFPFFABAMO_OFFSET UNITYSDK_OFFSET(0x1399A770)
#define CAKHIFCPOKM_EHAPLOCNDKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A760)

inline static constexpr unsigned int CAKHIFCPOKM_EHAPLOCNDKL_TypeDefinitionIndex = 79971;

class CAKHIFCPOKM_EHAPLOCNDKL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_EHAPLOCNDKL__CTOR_OFFSET))(this);
	}

	::System::Void BMFPFFABAMO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_EHAPLOCNDKL_BMFPFFABAMO_OFFSET))(this, PIIPCLCCOIG);
	}
};
