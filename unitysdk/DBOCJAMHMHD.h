#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBOCJAMHMHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2B260)

inline static constexpr unsigned int DBOCJAMHMHD_TypeDefinitionIndex = 85366;

class DBOCJAMHMHD : public ::System::Object
{
public:
	::System::Boolean DCIIFODNFBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOCJAMHMHD__CTOR_OFFSET))(this);
	}
};
