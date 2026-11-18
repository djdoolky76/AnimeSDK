#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOEOKDEEGKB_EKHLLEOMJIP_KLKLIAJFAFC_OFFSET UNITYSDK_OFFSET(0x1078AAF0)
#define MOEOKDEEGKB_EKHLLEOMJIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1078A4F0)

inline static constexpr unsigned int MOEOKDEEGKB_EKHLLEOMJIP_TypeDefinitionIndex = 49307;

class MOEOKDEEGKB_EKHLLEOMJIP : public ::System::Object
{
public:
	::System::Int32 HJLIBJJBLKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_EKHLLEOMJIP__CTOR_OFFSET))(this);
	}

	::System::String* KLKLIAJFAFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEOKDEEGKB_EKHLLEOMJIP_KLKLIAJFAFC_OFFSET))(this);
	}
};
