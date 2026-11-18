#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace System { class Action; }

#define FBAMLABJMKF_KNFOEPLHJIM_KPEIJBGHAED_OFFSET UNITYSDK_OFFSET(0x1418ECC0)
#define FBAMLABJMKF_KNFOEPLHJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1418ECB0)

inline static constexpr unsigned int FBAMLABJMKF_KNFOEPLHJIM_TypeDefinitionIndex = 78148;

class FBAMLABJMKF_KNFOEPLHJIM : public ::System::Object
{
public:
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x10
	::System::Action* NPFIONPDFED; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KNFOEPLHJIM__CTOR_OFFSET))(this);
	}

	::System::Void KPEIJBGHAED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KNFOEPLHJIM_KPEIJBGHAED_OFFSET))(this);
	}
};
