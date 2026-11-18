#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define EKPFDNANCLC___C_HGGEPIFDAAH_OFFSET UNITYSDK_OFFSET(0x11A99730)
#define EKPFDNANCLC___C_NLBHJHEAIPF_OFFSET UNITYSDK_OFFSET(0x11A99740)
#define EKPFDNANCLC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A996E0)
#define EKPFDNANCLC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A99720)

inline static constexpr unsigned int EKPFDNANCLC___c_TypeDefinitionIndex = 73131;

class EKPFDNANCLC___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__23_4()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(EKPFDNANCLC___c_TypeDefinitionIndex)->GetStaticField(0x4CDE0);
	}
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__23_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(EKPFDNANCLC___c_TypeDefinitionIndex)->GetStaticField(0x4CDE8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKPFDNANCLC___c_TypeDefinitionIndex)->GetStaticField(0x4CDF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKPFDNANCLC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC___C__CTOR_OFFSET))(this);
	}

	::System::Void HGGEPIFDAAH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKPFDNANCLC___C_HGGEPIFDAAH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NLBHJHEAIPF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKPFDNANCLC___C_NLBHJHEAIPF_OFFSET))(this, GLAOEHCGCFO);
	}
};
