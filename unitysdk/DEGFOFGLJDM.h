#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEGFOFGLJDM_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x12BAE7B0)
#define DEGFOFGLJDM_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x12BAE7F0)
#define DEGFOFGLJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAE860)

inline static constexpr unsigned int DEGFOFGLJDM_TypeDefinitionIndex = 82894;

class DEGFOFGLJDM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFOFGLJDM__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFOFGLJDM_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFOFGLJDM_ILEEFLAOOOM_OFFSET))(this);
	}
};
