#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DJBCFPNFNND___C_HOOPOMIIEIM_OFFSET UNITYSDK_OFFSET(0x1A1E3900)
#define DJBCFPNFNND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E38B0)
#define DJBCFPNFNND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E38F0)

inline static constexpr unsigned int DJBCFPNFNND___c_TypeDefinitionIndex = 68560;

class DJBCFPNFNND___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJBCFPNFNND___c_TypeDefinitionIndex)->GetStaticField(0x3D8A0);
	}
	static ::System::Func_2<::PNJDGHBEMLK*, ::System::Boolean>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::PNJDGHBEMLK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DJBCFPNFNND___c_TypeDefinitionIndex)->GetStaticField(0x3D8A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBCFPNFNND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBCFPNFNND___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HOOPOMIIEIM(::PNJDGHBEMLK* EBJICBIMOHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + DJBCFPNFNND___C_HOOPOMIIEIM_OFFSET))(this, EBJICBIMOHN);
	}
};
