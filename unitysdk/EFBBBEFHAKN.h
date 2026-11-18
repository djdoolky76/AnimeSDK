#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFBBBEFHAKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x10634810)

inline static constexpr unsigned int EFBBBEFHAKN_TypeDefinitionIndex = 48988;

class EFBBBEFHAKN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PFDGHBKBHIF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EFBBBEFHAKN_TypeDefinitionIndex)->GetStaticField(0x406F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFBBBEFHAKN__CCTOR_OFFSET))();
	}
};
