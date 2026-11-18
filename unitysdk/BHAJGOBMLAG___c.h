#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAOBFCJNNMG;
namespace System { template <typename T> class Comparison_1; }

#define BHAJGOBMLAG___C_EICEPIMMIFL_OFFSET UNITYSDK_OFFSET(0x1A5342E0)
#define BHAJGOBMLAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A534290)
#define BHAJGOBMLAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5342D0)

inline static constexpr unsigned int BHAJGOBMLAG___c_TypeDefinitionIndex = 16608;

class BHAJGOBMLAG___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::AAOBFCJNNMG*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::AAOBFCJNNMG*>**)Il2CppClass::FromTypeDefinitionIndex(BHAJGOBMLAG___c_TypeDefinitionIndex)->GetStaticField(0x77B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BHAJGOBMLAG___c_TypeDefinitionIndex)->GetStaticField(0x77B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHAJGOBMLAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAJGOBMLAG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EICEPIMMIFL(::AAOBFCJNNMG* HAAEBCOBKFF, ::AAOBFCJNNMG* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AAOBFCJNNMG*, ::AAOBFCJNNMG*))((::PBYTE)hIl2Cpp + BHAJGOBMLAG___C_EICEPIMMIFL_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
