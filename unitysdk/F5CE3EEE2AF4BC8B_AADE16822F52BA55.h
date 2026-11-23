#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define F5CE3EEE2AF4BC8B_AADE16822F52BA55_A2179D5DB60AEAC2_OFFSET UNITYSDK_OFFSET(0x3D51E90)
#define F5CE3EEE2AF4BC8B_AADE16822F52BA55__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D51FE0)
#define F5CE3EEE2AF4BC8B_AADE16822F52BA55__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5CE3EEE2AF4BC8B_AADE16822F52BA55_TypeDefinitionIndex = 10934;

class F5CE3EEE2AF4BC8B_AADE16822F52BA55 : public ::System::Object
{
public:
	static ::F5CE3EEE2AF4BC8B_AADE16822F52BA55** StaticGet_FB0A7EB463FA294A()
	{
		return (::F5CE3EEE2AF4BC8B_AADE16822F52BA55**)Il2CppClass::FromTypeDefinitionIndex(F5CE3EEE2AF4BC8B_AADE16822F52BA55_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet_E35D8A0C35B680FB()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F5CE3EEE2AF4BC8B_AADE16822F52BA55_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5CE3EEE2AF4BC8B_AADE16822F52BA55__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5CE3EEE2AF4BC8B_AADE16822F52BA55__CTOR_OFFSET))(this);
	}

	::System::Void A2179D5DB60AEAC2(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F5CE3EEE2AF4BC8B_AADE16822F52BA55_A2179D5DB60AEAC2_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
