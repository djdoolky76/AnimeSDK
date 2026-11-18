#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define HHBFOPNELHO___C_PBFGEAPFMMG_OFFSET UNITYSDK_OFFSET(0x10103DC0)
#define HHBFOPNELHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10103D70)
#define HHBFOPNELHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10103DB0)

inline static constexpr unsigned int HHBFOPNELHO___c_TypeDefinitionIndex = 40614;

class HHBFOPNELHO___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__104_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(HHBFOPNELHO___c_TypeDefinitionIndex)->GetStaticField(0x3B0C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHBFOPNELHO___c_TypeDefinitionIndex)->GetStaticField(0x3B0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHBFOPNELHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBFOPNELHO___C__CTOR_OFFSET))(this);
	}

	::System::Void PBFGEAPFMMG(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HHBFOPNELHO___C_PBFGEAPFMMG_OFFSET))(this, NFFNEFLKPDG);
	}
};
