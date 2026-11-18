#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFPFDLNAOME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383DA20)

inline static constexpr unsigned int JFPFDLNAOME_TypeDefinitionIndex = 61654;

class JFPFDLNAOME : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EPGPDPGHHAM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JFPFDLNAOME_TypeDefinitionIndex)->GetStaticField(0x3E2A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFPFDLNAOME__CCTOR_OFFSET))();
	}
};
