#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A54A07244429F9E7.h"
#include "unitysdk/E2DE926113CB084F.h"

#define F4E164DE63E7AD99__CCTOR_OFFSET UNITYSDK_OFFSET(0x2692DC0)
#define F4E164DE63E7AD99__CTOR_OFFSET UNITYSDK_OFFSET(0x2692E00)

inline static constexpr unsigned int F4E164DE63E7AD99_TypeDefinitionIndex = 6552;

class F4E164DE63E7AD99 : public ::A54A07244429F9E7
{
public:
	static ::E2DE926113CB084F* StaticGet_FAB178ED390E5F74()
	{
		return (::E2DE926113CB084F*)Il2CppClass::FromTypeDefinitionIndex(F4E164DE63E7AD99_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4E164DE63E7AD99__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4E164DE63E7AD99__CCTOR_OFFSET))();
	}
};
