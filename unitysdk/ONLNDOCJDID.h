#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONLNDOCJDID__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C324F0)

inline static constexpr unsigned int ONLNDOCJDID_TypeDefinitionIndex = 77927;

class ONLNDOCJDID : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IHHMHJLNFKN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ONLNDOCJDID_TypeDefinitionIndex)->GetStaticField(0x52430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONLNDOCJDID__CCTOR_OFFSET))();
	}
};
