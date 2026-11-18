#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLALGEACBLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF24A70)

inline static constexpr unsigned int PLALGEACBLK_TypeDefinitionIndex = 71977;

class PLALGEACBLK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PBAOCNAPOHF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PLALGEACBLK_TypeDefinitionIndex)->GetStaticField(0x510E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLALGEACBLK__CCTOR_OFFSET))();
	}
};
