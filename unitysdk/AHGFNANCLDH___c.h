#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPEEBMCNPD;
class HGAJKHIMKJP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define AHGFNANCLDH___C_DHGNGKNHLEF_OFFSET UNITYSDK_OFFSET(0x16FEBF40)
#define AHGFNANCLDH___C_NFLEAAPNDBE_OFFSET UNITYSDK_OFFSET(0x16FEC0D0)
#define AHGFNANCLDH___C_OAGBDNODKGH_OFFSET UNITYSDK_OFFSET(0x16FEBFF0)
#define AHGFNANCLDH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FEBEF0)
#define AHGFNANCLDH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEBF30)

inline static constexpr unsigned int AHGFNANCLDH___c_TypeDefinitionIndex = 89984;

class AHGFNANCLDH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AHGFNANCLDH___c_TypeDefinitionIndex)->GetStaticField(0x3FF70);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AHGFNANCLDH___c_TypeDefinitionIndex)->GetStaticField(0x3FF78);
	}
	static ::System::Func_2<::HGAJKHIMKJP*, ::BKPEEBMCNPD*>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::HGAJKHIMKJP*, ::BKPEEBMCNPD*>**)Il2CppClass::FromTypeDefinitionIndex(AHGFNANCLDH___c_TypeDefinitionIndex)->GetStaticField(0x3FF80);
	}
	static ::System::Func_2<::HGAJKHIMKJP*, ::System::Int32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::HGAJKHIMKJP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AHGFNANCLDH___c_TypeDefinitionIndex)->GetStaticField(0x3FF88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHGFNANCLDH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGFNANCLDH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DHGNGKNHLEF(::HGAJKHIMKJP* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + AHGFNANCLDH___C_DHGNGKNHLEF_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Int32 OAGBDNODKGH(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHGFNANCLDH___C_OAGBDNODKGH_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::BKPEEBMCNPD* NFLEAAPNDBE(::HGAJKHIMKJP* HAAEBCOBKFF)
	{
		return ((::BKPEEBMCNPD*(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + AHGFNANCLDH___C_NFLEAAPNDBE_OFFSET))(this, HAAEBCOBKFF);
	}
};
