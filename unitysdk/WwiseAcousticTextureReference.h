#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISEACOUSTICTEXTUREREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x2912850)
#define WWISEACOUSTICTEXTUREREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseAcousticTextureReference_TypeDefinitionIndex = 21582;

class WwiseAcousticTextureReference : public ::WwiseObjectReference
{
public:
	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEACOUSTICTEXTUREREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEACOUSTICTEXTUREREFERENCE__CTOR_OFFSET))(this);
	}
};
