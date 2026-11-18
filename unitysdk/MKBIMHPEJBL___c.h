#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define MKBIMHPEJBL___C_AAKBNBCCBGF_OFFSET UNITYSDK_OFFSET(0x1749E950)
#define MKBIMHPEJBL___C_BEMMNJKAOGN_OFFSET UNITYSDK_OFFSET(0x1749E9D0)
#define MKBIMHPEJBL___C_FGHPGDPCEAN_OFFSET UNITYSDK_OFFSET(0x1749E910)
#define MKBIMHPEJBL___C_JHAHCPCBNNI_OFFSET UNITYSDK_OFFSET(0x1749E990)
#define MKBIMHPEJBL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1749E8C0)
#define MKBIMHPEJBL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1749E900)

inline static constexpr unsigned int MKBIMHPEJBL___c_TypeDefinitionIndex = 72901;

class MKBIMHPEJBL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__62_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MKBIMHPEJBL___c_TypeDefinitionIndex)->GetStaticField(0x4A3D0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__61_13()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKBIMHPEJBL___c_TypeDefinitionIndex)->GetStaticField(0x4A3D8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MKBIMHPEJBL___c_TypeDefinitionIndex)->GetStaticField(0x4A3E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKBIMHPEJBL___c_TypeDefinitionIndex)->GetStaticField(0x4A3E8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_3()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MKBIMHPEJBL___c_TypeDefinitionIndex)->GetStaticField(0x4A3F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C__CTOR_OFFSET))(this);
	}

	::System::String* FGHPGDPCEAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C_FGHPGDPCEAN_OFFSET))(this);
	}

	::System::String* AAKBNBCCBGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C_AAKBNBCCBGF_OFFSET))(this);
	}

	::System::String* JHAHCPCBNNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C_JHAHCPCBNNI_OFFSET))(this);
	}

	::System::Int32 BEMMNJKAOGN(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MKBIMHPEJBL___C_BEMMNJKAOGN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
