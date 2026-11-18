#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FKBAHIEGCII___C_DOMFFHGOMKP_OFFSET UNITYSDK_OFFSET(0x156C2460)
#define FKBAHIEGCII___C_ECBFKOEJLKE_OFFSET UNITYSDK_OFFSET(0x156C2470)
#define FKBAHIEGCII___C_PPHBIIJNNHL_OFFSET UNITYSDK_OFFSET(0x156C2450)
#define FKBAHIEGCII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C2400)
#define FKBAHIEGCII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C2440)

inline static constexpr unsigned int FKBAHIEGCII___c_TypeDefinitionIndex = 55182;

class FKBAHIEGCII___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int32>** StaticGet___9__30_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FKBAHIEGCII___c_TypeDefinitionIndex)->GetStaticField(0x37710);
	}
	static ::System::Func_1<::System::Int32>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FKBAHIEGCII___c_TypeDefinitionIndex)->GetStaticField(0x37718);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKBAHIEGCII___c_TypeDefinitionIndex)->GetStaticField(0x37720);
	}
	static ::System::Func_1<::System::Int32>** StaticGet___9__33_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FKBAHIEGCII___c_TypeDefinitionIndex)->GetStaticField(0x37728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKBAHIEGCII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PPHBIIJNNHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII___C_PPHBIIJNNHL_OFFSET))(this);
	}

	::System::Int32 DOMFFHGOMKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII___C_DOMFFHGOMKP_OFFSET))(this);
	}

	::System::Int32 ECBFKOEJLKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII___C_ECBFKOEJLKE_OFFSET))(this);
	}
};
