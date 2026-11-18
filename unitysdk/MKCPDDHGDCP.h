#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MKCPDDHGDCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A109B0)

inline static constexpr unsigned int MKCPDDHGDCP_TypeDefinitionIndex = 92901;

class MKCPDDHGDCP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JOLDFNJFFPC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKCPDDHGDCP_TypeDefinitionIndex)->GetStaticField(0x4D6D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCPDDHGDCP__CCTOR_OFFSET))();
	}
};
