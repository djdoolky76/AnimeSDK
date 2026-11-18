#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKEMDNDAHNF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CHEKDBPKDFF___C_PPHJCLKKAAC_OFFSET UNITYSDK_OFFSET(0x16A2A690)
#define CHEKDBPKDFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A2A640)
#define CHEKDBPKDFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2A680)

inline static constexpr unsigned int CHEKDBPKDFF___c_TypeDefinitionIndex = 42808;

class CHEKDBPKDFF___c : public ::System::Object
{
public:
	static ::System::Func_2<::IKEMDNDAHNF*, ::System::Int32>** StaticGet___9__20_1()
	{
		return (::System::Func_2<::IKEMDNDAHNF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CHEKDBPKDFF___c_TypeDefinitionIndex)->GetStaticField(0x45D70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHEKDBPKDFF___c_TypeDefinitionIndex)->GetStaticField(0x45D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEKDBPKDFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PPHJCLKKAAC(::IKEMDNDAHNF* DEKJDEPKKLH)
	{
		return ((::System::Int32(*)(::PVOID, ::IKEMDNDAHNF*))((::PBYTE)hIl2Cpp + CHEKDBPKDFF___C_PPHJCLKKAAC_OFFSET))(this, DEKJDEPKKLH);
	}
};
