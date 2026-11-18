#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define JBFKJPKLACI__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F2490)

inline static constexpr unsigned int JBFKJPKLACI_TypeDefinitionIndex = 57456;

class JBFKJPKLACI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_CBDBLKMJIOG()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JBFKJPKLACI_TypeDefinitionIndex)->GetStaticField(0x44380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBFKJPKLACI__CCTOR_OFFSET))();
	}
};
