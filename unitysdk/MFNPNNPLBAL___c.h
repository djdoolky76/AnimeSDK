#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPADOFBOMDD;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFNPNNPLBAL___C_CNNMEOLLKIB_OFFSET UNITYSDK_OFFSET(0x11F495F0)
#define MFNPNNPLBAL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F495A0)
#define MFNPNNPLBAL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F495E0)

inline static constexpr unsigned int MFNPNNPLBAL___c_TypeDefinitionIndex = 64233;

class MFNPNNPLBAL___c : public ::System::Object
{
public:
	static ::System::Func_2<::PPADOFBOMDD*, ::System::UInt32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::PPADOFBOMDD*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MFNPNNPLBAL___c_TypeDefinitionIndex)->GetStaticField(0x3E7D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFNPNNPLBAL___c_TypeDefinitionIndex)->GetStaticField(0x3E7D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNPNNPLBAL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNPNNPLBAL___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 CNNMEOLLKIB(::PPADOFBOMDD* HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::PPADOFBOMDD*))((::PBYTE)hIl2Cpp + MFNPNNPLBAL___C_CNNMEOLLKIB_OFFSET))(this, HAAEBCOBKFF);
	}
};
