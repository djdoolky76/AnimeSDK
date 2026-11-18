#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CAKHIFCPOKM___C_ICMEKLINNKM_OFFSET UNITYSDK_OFFSET(0x159A7E30)
#define CAKHIFCPOKM___C_MFLCOIHIBOK_OFFSET UNITYSDK_OFFSET(0x159A7DA0)
#define CAKHIFCPOKM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159A7D50)
#define CAKHIFCPOKM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159A7D90)

inline static constexpr unsigned int CAKHIFCPOKM___c_TypeDefinitionIndex = 79964;

class CAKHIFCPOKM___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__4_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(CAKHIFCPOKM___c_TypeDefinitionIndex)->GetStaticField(0x45D10);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CAKHIFCPOKM___c_TypeDefinitionIndex)->GetStaticField(0x45D18);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAKHIFCPOKM___c_TypeDefinitionIndex)->GetStaticField(0x45D20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKHIFCPOKM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM___C__CTOR_OFFSET))(this);
	}

	::System::Void MFLCOIHIBOK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM___C_MFLCOIHIBOK_OFFSET))(this, DJCNCELJPOM);
	}

	::System::UInt32 ICMEKLINNKM(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAKHIFCPOKM___C_ICMEKLINNKM_OFFSET))(this, HBJOLKHGGDD);
	}
};
