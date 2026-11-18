#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PPNLDPMJEFA_LGHICCFFFIL_LEBGECMIACD_OFFSET UNITYSDK_OFFSET(0x1C2C8BC0)
#define PPNLDPMJEFA_LGHICCFFFIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8BB0)

inline static constexpr unsigned int PPNLDPMJEFA_LGHICCFFFIL_TypeDefinitionIndex = 57153;

class PPNLDPMJEFA_LGHICCFFFIL : public ::System::Object
{
public:
	::System::Int32 JHFKDGBCOBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA_LGHICCFFFIL__CTOR_OFFSET))(this);
	}

	::System::String* LEBGECMIACD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA_LGHICCFFFIL_LEBGECMIACD_OFFSET))(this);
	}
};
