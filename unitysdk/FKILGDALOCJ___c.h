#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCDPPBFDFPG;
namespace System { template <typename T> class Comparison_1; }

#define FKILGDALOCJ___C_BLPJGHEFNEJ_OFFSET UNITYSDK_OFFSET(0x10EBE7D0)
#define FKILGDALOCJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EBE780)
#define FKILGDALOCJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBE7C0)

inline static constexpr unsigned int FKILGDALOCJ___c_TypeDefinitionIndex = 85582;

class FKILGDALOCJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKILGDALOCJ___c_TypeDefinitionIndex)->GetStaticField(0x3DC80);
	}
	static ::System::Comparison_1<::KCDPPBFDFPG*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::KCDPPBFDFPG*>**)Il2CppClass::FromTypeDefinitionIndex(FKILGDALOCJ___c_TypeDefinitionIndex)->GetStaticField(0x3DC88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKILGDALOCJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKILGDALOCJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BLPJGHEFNEJ(::KCDPPBFDFPG* EIHELBHCLID, ::KCDPPBFDFPG* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::KCDPPBFDFPG*, ::KCDPPBFDFPG*))((::PBYTE)hIl2Cpp + FKILGDALOCJ___C_BLPJGHEFNEJ_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
