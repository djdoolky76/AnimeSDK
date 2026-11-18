#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLDGHFPADOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B0E3D0)

inline static constexpr unsigned int HLDGHFPADOE_TypeDefinitionIndex = 78756;

class HLDGHFPADOE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_INEIFOAPHHA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HLDGHFPADOE_TypeDefinitionIndex)->GetStaticField(0x37180);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDGHFPADOE__CCTOR_OFFSET))();
	}
};
