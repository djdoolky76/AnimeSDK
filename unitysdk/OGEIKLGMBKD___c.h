#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;
namespace System { template <typename T> class Predicate_1; }

#define OGEIKLGMBKD___C_ENKHAFDPDOK_OFFSET UNITYSDK_OFFSET(0xF18E5F0)
#define OGEIKLGMBKD___C_NFCDBEBNHGE_OFFSET UNITYSDK_OFFSET(0xF18E580)
#define OGEIKLGMBKD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF18E530)
#define OGEIKLGMBKD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF18E570)

inline static constexpr unsigned int OGEIKLGMBKD___c_TypeDefinitionIndex = 40624;

class OGEIKLGMBKD___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::AMFAHGEFDFJ*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::AMFAHGEFDFJ*>**)Il2CppClass::FromTypeDefinitionIndex(OGEIKLGMBKD___c_TypeDefinitionIndex)->GetStaticField(0x3F900);
	}
	static ::System::Predicate_1<::AMFAHGEFDFJ*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::AMFAHGEFDFJ*>**)Il2CppClass::FromTypeDefinitionIndex(OGEIKLGMBKD___c_TypeDefinitionIndex)->GetStaticField(0x3F908);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OGEIKLGMBKD___c_TypeDefinitionIndex)->GetStaticField(0x3F910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGEIKLGMBKD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEIKLGMBKD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NFCDBEBNHGE(::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + OGEIKLGMBKD___C_NFCDBEBNHGE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean ENKHAFDPDOK(::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + OGEIKLGMBKD___C_ENKHAFDPDOK_OFFSET))(this, LJBPECKCCEA);
	}
};
