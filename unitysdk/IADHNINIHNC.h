#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IADHNINIHNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F54B60)

inline static constexpr unsigned int IADHNINIHNC_TypeDefinitionIndex = 76419;

class IADHNINIHNC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ICNILJNHLLL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IADHNINIHNC_TypeDefinitionIndex)->GetStaticField(0x3DFC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADHNINIHNC__CCTOR_OFFSET))();
	}
};
