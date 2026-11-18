#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMGGMEKLHKG;
class MIDOGLOBPKA;
namespace System { template <typename T> class Comparison_1; }

#define LEIKACOEJAI___C_EHOKENBGDGH_OFFSET UNITYSDK_OFFSET(0x1A604F10)
#define LEIKACOEJAI___C_GOKDJJNMHKC_OFFSET UNITYSDK_OFFSET(0x1A604F60)
#define LEIKACOEJAI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A604EC0)
#define LEIKACOEJAI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A604F00)

inline static constexpr unsigned int LEIKACOEJAI___c_TypeDefinitionIndex = 76187;

class LEIKACOEJAI___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MIDOGLOBPKA*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::MIDOGLOBPKA*>**)Il2CppClass::FromTypeDefinitionIndex(LEIKACOEJAI___c_TypeDefinitionIndex)->GetStaticField(0x4D5A0);
	}
	static ::System::Comparison_1<::BMGGMEKLHKG*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::BMGGMEKLHKG*>**)Il2CppClass::FromTypeDefinitionIndex(LEIKACOEJAI___c_TypeDefinitionIndex)->GetStaticField(0x4D5A8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LEIKACOEJAI___c_TypeDefinitionIndex)->GetStaticField(0x4D5B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIKACOEJAI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIKACOEJAI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EHOKENBGDGH(::BMGGMEKLHKG* EJCBEJMGFAJ, ::BMGGMEKLHKG* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BMGGMEKLHKG*, ::BMGGMEKLHKG*))((::PBYTE)hIl2Cpp + LEIKACOEJAI___C_EHOKENBGDGH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 GOKDJJNMHKC(::MIDOGLOBPKA* EJCBEJMGFAJ, ::MIDOGLOBPKA* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MIDOGLOBPKA*, ::MIDOGLOBPKA*))((::PBYTE)hIl2Cpp + LEIKACOEJAI___C_GOKDJJNMHKC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
