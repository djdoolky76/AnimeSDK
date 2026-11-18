#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAFLNDEPACP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E25720)

inline static constexpr unsigned int HAFLNDEPACP_TypeDefinitionIndex = 46446;

class HAFLNDEPACP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PJIJJNMMCBA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HAFLNDEPACP_TypeDefinitionIndex)->GetStaticField(0x46400);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFLNDEPACP__CCTOR_OFFSET))();
	}
};
