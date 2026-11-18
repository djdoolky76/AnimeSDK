#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHBCCGMCFC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPACLKNOLCA_JELPPJFEIAC_OFFSET UNITYSDK_OFFSET(0x17632120)
#define JPACLKNOLCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17632610)
#define JPACLKNOLCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17632600)

inline static constexpr unsigned int JPACLKNOLCA_TypeDefinitionIndex = 54853;

class JPACLKNOLCA : public ::System::Object
{
public:
	static ::JPACLKNOLCA** StaticGet_NJLLMPCDOEB()
	{
		return (::JPACLKNOLCA**)Il2CppClass::FromTypeDefinitionIndex(JPACLKNOLCA_TypeDefinitionIndex)->GetStaticField(0x4BCE0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* LEFCKNFDGBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPACLKNOLCA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPACLKNOLCA__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* JELPPJFEIAC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPACLKNOLCA_JELPPJFEIAC_OFFSET))(this);
	}
};
