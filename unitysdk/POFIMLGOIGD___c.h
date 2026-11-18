#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOHBBBPDCOE;
class HGAJKHIMKJP;
class NKJLGFPNLBD;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Action_1; }

#define POFIMLGOIGD___C_FGONIFGMIMH_OFFSET UNITYSDK_OFFSET(0x1372D460)
#define POFIMLGOIGD___C_KNJGFMDACNP_OFFSET UNITYSDK_OFFSET(0x1372D480)
#define POFIMLGOIGD___C_LBPAFCOAION_OFFSET UNITYSDK_OFFSET(0x1372D450)
#define POFIMLGOIGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1372D400)
#define POFIMLGOIGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1372D440)

inline static constexpr unsigned int POFIMLGOIGD___c_TypeDefinitionIndex = 57466;

class POFIMLGOIGD___c : public ::System::Object
{
public:
	static ::System::Converter_2<::HGAJKHIMKJP*, ::System::Int32>** StaticGet___9__116_0()
	{
		return (::System::Converter_2<::HGAJKHIMKJP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(POFIMLGOIGD___c_TypeDefinitionIndex)->GetStaticField(0x4C9F0);
	}
	static ::System::Action_1<::DOHBBBPDCOE*>** StaticGet___9__130_0()
	{
		return (::System::Action_1<::DOHBBBPDCOE*>**)Il2CppClass::FromTypeDefinitionIndex(POFIMLGOIGD___c_TypeDefinitionIndex)->GetStaticField(0x4C9F8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(POFIMLGOIGD___c_TypeDefinitionIndex)->GetStaticField(0x4CA00);
	}
	static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__137_0()
	{
		return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(POFIMLGOIGD___c_TypeDefinitionIndex)->GetStaticField(0x4CA08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFIMLGOIGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD___C__CTOR_OFFSET))(this);
	}

	::System::Void LBPAFCOAION(::DOHBBBPDCOE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::DOHBBBPDCOE*))((::PBYTE)hIl2Cpp + POFIMLGOIGD___C_LBPAFCOAION_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Int32 FGONIFGMIMH(::HGAJKHIMKJP* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + POFIMLGOIGD___C_FGONIFGMIMH_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void KNJGFMDACNP(::NKJLGFPNLBD* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + POFIMLGOIGD___C_KNJGFMDACNP_OFFSET))(this, JBNBMFNNELP);
	}
};
