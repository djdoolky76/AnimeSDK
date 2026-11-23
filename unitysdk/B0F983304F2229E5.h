#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B0F983304F2229E5_A2AADFD2ECD3A556_OFFSET UNITYSDK_OFFSET(0x294A070)
#define B0F983304F2229E5_FE93D8A64F92FFDE_OFFSET UNITYSDK_OFFSET(0x2949FE0)
#define B0F983304F2229E5__CTOR_OFFSET UNITYSDK_OFFSET(0x294A0C0)

inline static constexpr unsigned int B0F983304F2229E5_TypeDefinitionIndex = 15445;

class B0F983304F2229E5 : public ::System::Object
{
public:
	::System::String* B5868E52EF5FF7E6; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0F983304F2229E5__CTOR_OFFSET))(this);
	}

	::System::Void FE93D8A64F92FFDE(::System::String* B8D6BA27651D898D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B0F983304F2229E5_FE93D8A64F92FFDE_OFFSET))(this, B8D6BA27651D898D);
	}

	::System::String* A2AADFD2ECD3A556(::System::String* B8D6BA27651D898D)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B0F983304F2229E5_A2AADFD2ECD3A556_OFFSET))(this, B8D6BA27651D898D);
	}
};
