#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OICMIEDFBHK.h"
#include "unitysdk/System/Object.h"

#define PEMIGLMDAFE_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x1B9D3ED0)
#define PEMIGLMDAFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9D3EC0)
#define PEMIGLMDAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D3EB0)

inline static constexpr unsigned int PEMIGLMDAFE_TypeDefinitionIndex = 49963;

class PEMIGLMDAFE : public ::System::Object
{
public:
	static ::OICMIEDFBHK* StaticGet_AGLGIJLPPKM()
	{
		return (::OICMIEDFBHK*)Il2CppClass::FromTypeDefinitionIndex(PEMIGLMDAFE_TypeDefinitionIndex)->GetStaticField(0xFCD0);
	}
	::OICMIEDFBHK JDHAFGDONFN; // 0x10

	::System::Void _ctor(::OICMIEDFBHK GPHEOOEMAHD)
	{
		return ((::System::Void(*)(::PVOID, ::OICMIEDFBHK))((::PBYTE)hIl2Cpp + PEMIGLMDAFE__CTOR_OFFSET))(this, GPHEOOEMAHD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMIGLMDAFE__CCTOR_OFFSET))();
	}

	::OICMIEDFBHK FENCOLLJAMO()
	{
		return ((::OICMIEDFBHK(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMIGLMDAFE_FENCOLLJAMO_OFFSET))(this);
	}
};
