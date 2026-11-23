#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class E3E5DF04DCFE6819; }

#define FAB45D193BB49413_BA482729DF4D00EA_AC5C9E62FFDE6CC6_OFFSET UNITYSDK_OFFSET(0x3CEB360)
#define FAB45D193BB49413_BA482729DF4D00EA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int FAB45D193BB49413_BA482729DF4D00EA_TypeDefinitionIndex = 10718;

class FAB45D193BB49413_BA482729DF4D00EA : public ::System::Object
{
public:
	::System::Threading::E3E5DF04DCFE6819* FAA48133E2CFE05A; // 0x10
	::System::Object* BB64989312CFC77E; // 0x18

	::System::Void _ctor(::System::Threading::E3E5DF04DCFE6819* E9CAEB929DE1EB8F, ::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::E3E5DF04DCFE6819*, ::System::Object*))((::PBYTE)hIl2Cpp + FAB45D193BB49413_BA482729DF4D00EA__CTOR_OFFSET))(this, E9CAEB929DE1EB8F, E5EB06E4FD2C32F7);
	}

	::System::Void AC5C9E62FFDE6CC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAB45D193BB49413_BA482729DF4D00EA_AC5C9E62FFDE6CC6_OFFSET))(this);
	}
};
