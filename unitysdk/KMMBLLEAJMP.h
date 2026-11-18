#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMMBLLEAJMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17919CD0)

inline static constexpr unsigned int KMMBLLEAJMP_TypeDefinitionIndex = 89875;

class KMMBLLEAJMP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PGECDLDAAMF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KMMBLLEAJMP_TypeDefinitionIndex)->GetStaticField(0x4BE00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMMBLLEAJMP__CCTOR_OFFSET))();
	}
};
