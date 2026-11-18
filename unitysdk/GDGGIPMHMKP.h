#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDGGIPMHMKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18132DF0)

inline static constexpr unsigned int GDGGIPMHMKP_TypeDefinitionIndex = 41331;

class GDGGIPMHMKP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MBJDEOGFOHG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GDGGIPMHMKP_TypeDefinitionIndex)->GetStaticField(0x3AE90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGGIPMHMKP__CCTOR_OFFSET))();
	}
};
