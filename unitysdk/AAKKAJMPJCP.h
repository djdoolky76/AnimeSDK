#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAKKAJMPJCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B82980)

inline static constexpr unsigned int AAKKAJMPJCP_TypeDefinitionIndex = 67790;

class AAKKAJMPJCP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IBFANLKHPGC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AAKKAJMPJCP_TypeDefinitionIndex)->GetStaticField(0x3FF00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKKAJMPJCP__CCTOR_OFFSET))();
	}
};
