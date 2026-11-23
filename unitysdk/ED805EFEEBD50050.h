#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A873D553B8040214;

#define ED805EFEEBD50050_A36E3EFB665ABF7D_OFFSET UNITYSDK_OFFSET(0x389B830)
#define ED805EFEEBD50050_E4E4B3ABC283B17A_OFFSET UNITYSDK_OFFSET(0x389BD00)
#define ED805EFEEBD50050__CCTOR_OFFSET UNITYSDK_OFFSET(0x389BEE0)
#define ED805EFEEBD50050__CTOR_OFFSET UNITYSDK_OFFSET(0x389C170)

inline static constexpr unsigned int ED805EFEEBD50050_TypeDefinitionIndex = 20943;

class ED805EFEEBD50050 : public ::System::Object
{
public:
	static ::ED805EFEEBD50050** StaticGet_E66CCDAE0AA333F7()
	{
		return (::ED805EFEEBD50050**)Il2CppClass::FromTypeDefinitionIndex(ED805EFEEBD50050_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::ED805EFEEBD50050** StaticGet_E30F7B68048B8F1B()
	{
		return (::ED805EFEEBD50050**)Il2CppClass::FromTypeDefinitionIndex(ED805EFEEBD50050_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::Il2CppArray<::System::Int16>* E1CDECD731148FAA; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED805EFEEBD50050__CCTOR_OFFSET))();
	}

	::System::Int32 E4E4B3ABC283B17A(::A873D553B8040214* AF4717A1A80FD60F)
	{
		return ((::System::Int32(*)(::PVOID, ::A873D553B8040214*))((::PBYTE)hIl2Cpp + ED805EFEEBD50050_E4E4B3ABC283B17A_OFFSET))(this, AF4717A1A80FD60F);
	}

	::System::Void _ctor(::Il2CppArray<::System::Byte>* FC0AD546FB5349A7)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ED805EFEEBD50050__CTOR_OFFSET))(this, FC0AD546FB5349A7);
	}

	::System::Void A36E3EFB665ABF7D(::Il2CppArray<::System::Byte>* FC0AD546FB5349A7)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ED805EFEEBD50050_A36E3EFB665ABF7D_OFFSET))(this, FC0AD546FB5349A7);
	}
};
