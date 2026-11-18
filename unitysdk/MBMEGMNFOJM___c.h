#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MBMEGMNFOJM___C_DALHIDOAPKP_OFFSET UNITYSDK_OFFSET(0x151BA900)
#define MBMEGMNFOJM___C_GPPALDDJBHN_OFFSET UNITYSDK_OFFSET(0x151BA910)
#define MBMEGMNFOJM___C_PNKAGDNMCKI_OFFSET UNITYSDK_OFFSET(0x151BA930)
#define MBMEGMNFOJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151BA8B0)
#define MBMEGMNFOJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151BA8F0)

inline static constexpr unsigned int MBMEGMNFOJM___c_TypeDefinitionIndex = 54778;

class MBMEGMNFOJM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MBMEGMNFOJM___c_TypeDefinitionIndex)->GetStaticField(0x46A20);
	}
	static ::System::Func_2<::BPHGNMNLLHF*, ::System::Int32>** StaticGet___9__24_1()
	{
		return (::System::Func_2<::BPHGNMNLLHF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MBMEGMNFOJM___c_TypeDefinitionIndex)->GetStaticField(0x46A28);
	}
	static ::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MBMEGMNFOJM___c_TypeDefinitionIndex)->GetStaticField(0x46A30);
	}
	static ::System::Func_2<::BPHGNMNLLHF*, ::System::UInt32>** StaticGet___9__24_3()
	{
		return (::System::Func_2<::BPHGNMNLLHF*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MBMEGMNFOJM___c_TypeDefinitionIndex)->GetStaticField(0x46A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMEGMNFOJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMEGMNFOJM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DALHIDOAPKP(::BPHGNMNLLHF* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MBMEGMNFOJM___C_DALHIDOAPKP_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Int32 GPPALDDJBHN(::BPHGNMNLLHF* BDHOILPIGKB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MBMEGMNFOJM___C_GPPALDDJBHN_OFFSET))(this, BDHOILPIGKB);
	}

	::System::UInt32 PNKAGDNMCKI(::BPHGNMNLLHF* EJCBEJMGFAJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MBMEGMNFOJM___C_PNKAGDNMCKI_OFFSET))(this, EJCBEJMGFAJ);
	}
};
