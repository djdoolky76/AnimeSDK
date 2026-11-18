#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EPEMBPJGDNB___C_LIINLDHMPPD_OFFSET UNITYSDK_OFFSET(0x1616A080)
#define EPEMBPJGDNB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1616A030)
#define EPEMBPJGDNB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1616A070)

inline static constexpr unsigned int EPEMBPJGDNB___c_TypeDefinitionIndex = 46293;

class EPEMBPJGDNB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EPEMBPJGDNB___c_TypeDefinitionIndex)->GetStaticField(0x49B00);
	}
	static ::System::Action** StaticGet___9__13_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EPEMBPJGDNB___c_TypeDefinitionIndex)->GetStaticField(0x49B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPEMBPJGDNB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB___C__CTOR_OFFSET))(this);
	}

	::System::Void LIINLDHMPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB___C_LIINLDHMPPD_OFFSET))(this);
	}
};
