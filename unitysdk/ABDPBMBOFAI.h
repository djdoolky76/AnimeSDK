#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABDPBMBOFAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D5B4B0)

inline static constexpr unsigned int ABDPBMBOFAI_TypeDefinitionIndex = 74172;

class ABDPBMBOFAI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CMNKDCIAIKH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ABDPBMBOFAI_TypeDefinitionIndex)->GetStaticField(0x4FEC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDPBMBOFAI__CCTOR_OFFSET))();
	}
};
