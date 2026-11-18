#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JKOOACGCMGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x157CCFF0)

inline static constexpr unsigned int JKOOACGCMGK_TypeDefinitionIndex = 47884;

class JKOOACGCMGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OGNDKMNNHPB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JKOOACGCMGK_TypeDefinitionIndex)->GetStaticField(0x51530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKOOACGCMGK__CCTOR_OFFSET))();
	}
};
