#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CILFALHJPHB_EMKIJCELAAJ;

#define CILFALHJPHB_CGNFMDJANFB_IFOHEKACMEF_OFFSET UNITYSDK_OFFSET(0x1FA49DF0)
#define CILFALHJPHB_CGNFMDJANFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA49DE0)

inline static constexpr unsigned int CILFALHJPHB_CGNFMDJANFB_TypeDefinitionIndex = 96530;

class CILFALHJPHB_CGNFMDJANFB : public ::System::Object
{
public:
	::CILFALHJPHB_EMKIJCELAAJ* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_CGNFMDJANFB__CTOR_OFFSET))(this);
	}

	::System::Void IFOHEKACMEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_CGNFMDJANFB_IFOHEKACMEF_OFFSET))(this);
	}
};
