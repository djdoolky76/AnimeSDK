#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKIIJMMHMKO;
class HFJBHBKDMJO_IPAKJBIIEDO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HFJBHBKDMJO___C_IAOPKGGMEFH_OFFSET UNITYSDK_OFFSET(0x13D8BBA0)
#define HFJBHBKDMJO___C_MAOIIKDBJLI_OFFSET UNITYSDK_OFFSET(0x13D8B9C0)
#define HFJBHBKDMJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D8B970)
#define HFJBHBKDMJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8B9B0)

inline static constexpr unsigned int HFJBHBKDMJO___c_TypeDefinitionIndex = 86669;

class HFJBHBKDMJO___c : public ::System::Object
{
public:
	static ::System::Func_2<::DKIIJMMHMKO*, ::System::Object*>** StaticGet___9__19_1()
	{
		return (::System::Func_2<::DKIIJMMHMKO*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HFJBHBKDMJO___c_TypeDefinitionIndex)->GetStaticField(0x442F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HFJBHBKDMJO___c_TypeDefinitionIndex)->GetStaticField(0x442F8);
	}
	static ::System::Comparison_1<::DKIIJMMHMKO*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::DKIIJMMHMKO*>**)Il2CppClass::FromTypeDefinitionIndex(HFJBHBKDMJO___c_TypeDefinitionIndex)->GetStaticField(0x44300);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJBHBKDMJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJBHBKDMJO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MAOIIKDBJLI(::DKIIJMMHMKO* EIHELBHCLID, ::DKIIJMMHMKO* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::DKIIJMMHMKO*, ::DKIIJMMHMKO*))((::PBYTE)hIl2Cpp + HFJBHBKDMJO___C_MAOIIKDBJLI_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}

	::HFJBHBKDMJO_IPAKJBIIEDO* IAOPKGGMEFH(::DKIIJMMHMKO* EJCBEJMGFAJ)
	{
		return ((::HFJBHBKDMJO_IPAKJBIIEDO*(*)(::PVOID, ::DKIIJMMHMKO*))((::PBYTE)hIl2Cpp + HFJBHBKDMJO___C_IAOPKGGMEFH_OFFSET))(this, EJCBEJMGFAJ);
	}
};
