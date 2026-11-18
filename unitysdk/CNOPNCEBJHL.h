#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNOPNCEBJHL_COMPARE_OFFSET UNITYSDK_OFFSET(0x147AF9A0)
#define CNOPNCEBJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x147AFB50)

inline static constexpr unsigned int CNOPNCEBJHL_TypeDefinitionIndex = 88082;

class CNOPNCEBJHL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOPNCEBJHL__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Object* HAAEBCOBKFF, ::System::Object* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CNOPNCEBJHL_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
