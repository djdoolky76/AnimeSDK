#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKIIJMMHMKO;
class HFJBHBKDMJO_IPAKJBIIEDO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define BICJOOJFAPO___C_BLPJGHEFNEJ_OFFSET UNITYSDK_OFFSET(0x169F44A0)
#define BICJOOJFAPO___C_JFGMBPEFBII_OFFSET UNITYSDK_OFFSET(0x169F4440)
#define BICJOOJFAPO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F43F0)
#define BICJOOJFAPO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4430)

inline static constexpr unsigned int BICJOOJFAPO___c_TypeDefinitionIndex = 62365;

class BICJOOJFAPO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BICJOOJFAPO___c_TypeDefinitionIndex)->GetStaticField(0x45C90);
	}
	static ::System::Comparison_1<::DKIIJMMHMKO*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::DKIIJMMHMKO*>**)Il2CppClass::FromTypeDefinitionIndex(BICJOOJFAPO___c_TypeDefinitionIndex)->GetStaticField(0x45C98);
	}
	static ::System::Func_2<::DKIIJMMHMKO*, ::System::Object*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::DKIIJMMHMKO*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BICJOOJFAPO___c_TypeDefinitionIndex)->GetStaticField(0x45CA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICJOOJFAPO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO___C__CTOR_OFFSET))(this);
	}

	::HFJBHBKDMJO_IPAKJBIIEDO* JFGMBPEFBII(::DKIIJMMHMKO* EJCBEJMGFAJ)
	{
		return ((::HFJBHBKDMJO_IPAKJBIIEDO*(*)(::PVOID, ::DKIIJMMHMKO*))((::PBYTE)hIl2Cpp + BICJOOJFAPO___C_JFGMBPEFBII_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Int32 BLPJGHEFNEJ(::DKIIJMMHMKO* EIHELBHCLID, ::DKIIJMMHMKO* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::DKIIJMMHMKO*, ::DKIIJMMHMKO*))((::PBYTE)hIl2Cpp + BICJOOJFAPO___C_BLPJGHEFNEJ_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
