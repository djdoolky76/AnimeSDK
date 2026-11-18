#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CDKFHPIKOGN___C_CGLEDFLFJBC_OFFSET UNITYSDK_OFFSET(0x145483A0)
#define CDKFHPIKOGN___C_DHHOFLAMEJC_OFFSET UNITYSDK_OFFSET(0x145483D0)
#define CDKFHPIKOGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14548350)
#define CDKFHPIKOGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14548390)

inline static constexpr unsigned int CDKFHPIKOGN___c_TypeDefinitionIndex = 87247;

class CDKFHPIKOGN___c : public ::System::Object
{
public:
	static ::System::Func_2<::BPHGNMNLLHF*, ::System::Int32>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::BPHGNMNLLHF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDKFHPIKOGN___c_TypeDefinitionIndex)->GetStaticField(0x402D0);
	}
	static ::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CDKFHPIKOGN___c_TypeDefinitionIndex)->GetStaticField(0x402D8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CDKFHPIKOGN___c_TypeDefinitionIndex)->GetStaticField(0x402E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDKFHPIKOGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKFHPIKOGN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CGLEDFLFJBC(::BPHGNMNLLHF* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + CDKFHPIKOGN___C_CGLEDFLFJBC_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean DHHOFLAMEJC(::BPHGNMNLLHF* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + CDKFHPIKOGN___C_DHHOFLAMEJC_OFFSET))(this, IPMMCGDMODG);
	}
};
