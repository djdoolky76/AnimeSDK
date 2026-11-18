#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJADBOGPHMC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MGEPLIGPONN___C_HNOEGOCDPKI_OFFSET UNITYSDK_OFFSET(0x14DE2CE0)
#define MGEPLIGPONN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE2C90)
#define MGEPLIGPONN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE2CD0)

inline static constexpr unsigned int MGEPLIGPONN___c_TypeDefinitionIndex = 74864;

class MGEPLIGPONN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MGEPLIGPONN___c_TypeDefinitionIndex)->GetStaticField(0x4F7E0);
	}
	static ::System::Func_2<::NJADBOGPHMC*, ::NJADBOGPHMC*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::NJADBOGPHMC*, ::NJADBOGPHMC*>**)Il2CppClass::FromTypeDefinitionIndex(MGEPLIGPONN___c_TypeDefinitionIndex)->GetStaticField(0x4F7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGEPLIGPONN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEPLIGPONN___C__CTOR_OFFSET))(this);
	}

	::NJADBOGPHMC* HNOEGOCDPKI(::NJADBOGPHMC* JNDDJMAHNAI)
	{
		return ((::NJADBOGPHMC*(*)(::PVOID, ::NJADBOGPHMC*))((::PBYTE)hIl2Cpp + MGEPLIGPONN___C_HNOEGOCDPKI_OFFSET))(this, JNDDJMAHNAI);
	}
};
