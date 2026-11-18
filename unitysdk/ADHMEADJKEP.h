#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADHMEADJKEP_EEACDHINEJI_OFFSET UNITYSDK_OFFSET(0x1CE80BA0)
#define ADHMEADJKEP_OILIGEFLNMO_OFFSET UNITYSDK_OFFSET(0x1CE80B90)
#define ADHMEADJKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE80B80)

inline static constexpr unsigned int ADHMEADJKEP_TypeDefinitionIndex = 34787;

class ADHMEADJKEP : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_JHLDDCBHIAH()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(ADHMEADJKEP_TypeDefinitionIndex)->GetStaticField(0x89A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHMEADJKEP__CTOR_OFFSET))(this);
	}

	static ::System::UInt64 OILIGEFLNMO()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + ADHMEADJKEP_OILIGEFLNMO_OFFSET))();
	}

	static ::System::UInt64 EEACDHINEJI()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + ADHMEADJKEP_EEACDHINEJI_OFFSET))();
	}
};
