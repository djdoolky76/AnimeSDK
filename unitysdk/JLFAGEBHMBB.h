#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JLFAGEBHMBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3674D0)

inline static constexpr unsigned int JLFAGEBHMBB_TypeDefinitionIndex = 45606;

class JLFAGEBHMBB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BOCJNIIODPB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JLFAGEBHMBB_TypeDefinitionIndex)->GetStaticField(0x4F6E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLFAGEBHMBB__CCTOR_OFFSET))();
	}
};
