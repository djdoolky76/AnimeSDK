#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHKJPJPIAAJ.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define DOAJCBHEECN___C_JJEKCAACNKC_OFFSET UNITYSDK_OFFSET(0x1346B6A0)
#define DOAJCBHEECN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1346B650)
#define DOAJCBHEECN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1346B690)

inline static constexpr unsigned int DOAJCBHEECN___c_TypeDefinitionIndex = 66644;

class DOAJCBHEECN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOAJCBHEECN___c_TypeDefinitionIndex)->GetStaticField(0x373B0);
	}
	static ::System::Comparison_1<::IHKJPJPIAAJ>** StaticGet___9__23_0()
	{
		return (::System::Comparison_1<::IHKJPJPIAAJ>**)Il2CppClass::FromTypeDefinitionIndex(DOAJCBHEECN___c_TypeDefinitionIndex)->GetStaticField(0x373B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOAJCBHEECN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JJEKCAACNKC(::IHKJPJPIAAJ EJCBEJMGFAJ, ::IHKJPJPIAAJ EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IHKJPJPIAAJ, ::IHKJPJPIAAJ))((::PBYTE)hIl2Cpp + DOAJCBHEECN___C_JJEKCAACNKC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
