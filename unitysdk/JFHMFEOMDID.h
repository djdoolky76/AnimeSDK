#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFHMFEOMDID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4735D0)

inline static constexpr unsigned int JFHMFEOMDID_TypeDefinitionIndex = 63715;

class JFHMFEOMDID : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LPPANBCCOJF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JFHMFEOMDID_TypeDefinitionIndex)->GetStaticField(0x44430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHMFEOMDID__CCTOR_OFFSET))();
	}
};
