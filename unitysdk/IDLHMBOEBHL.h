#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IDLHMBOEBHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A399940)

inline static constexpr unsigned int IDLHMBOEBHL_TypeDefinitionIndex = 79140;

class IDLHMBOEBHL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AAHFOEGOKJM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IDLHMBOEBHL_TypeDefinitionIndex)->GetStaticField(0x4BB90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLHMBOEBHL__CCTOR_OFFSET))();
	}
};
