#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHPBOKLIBHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B6BCD0)

inline static constexpr unsigned int PHPBOKLIBHG_TypeDefinitionIndex = 82561;

class PHPBOKLIBHG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AIMECKNLPMF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PHPBOKLIBHG_TypeDefinitionIndex)->GetStaticField(0x510B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPBOKLIBHG__CCTOR_OFFSET))();
	}
};
