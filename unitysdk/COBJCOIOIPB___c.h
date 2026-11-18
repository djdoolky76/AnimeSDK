#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFNPNNPLBAL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define COBJCOIOIPB___C_FAMNMMKKFGD_OFFSET UNITYSDK_OFFSET(0x1457F7E0)
#define COBJCOIOIPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1457F790)
#define COBJCOIOIPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1457F7D0)

inline static constexpr unsigned int COBJCOIOIPB___c_TypeDefinitionIndex = 67896;

class COBJCOIOIPB___c : public ::System::Object
{
public:
	static ::System::Func_2<::MFNPNNPLBAL*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MFNPNNPLBAL*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(COBJCOIOIPB___c_TypeDefinitionIndex)->GetStaticField(0x45DC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(COBJCOIOIPB___c_TypeDefinitionIndex)->GetStaticField(0x45DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COBJCOIOIPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBJCOIOIPB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FAMNMMKKFGD(::MFNPNNPLBAL* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::MFNPNNPLBAL*))((::PBYTE)hIl2Cpp + COBJCOIOIPB___C_FAMNMMKKFGD_OFFSET))(this, IPMMCGDMODG);
	}
};
