#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKNGMDAPMGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x158F4690)

inline static constexpr unsigned int LKNGMDAPMGL_TypeDefinitionIndex = 83037;

class LKNGMDAPMGL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MDNNLEGEAHB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LKNGMDAPMGL_TypeDefinitionIndex)->GetStaticField(0x38530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKNGMDAPMGL__CCTOR_OFFSET))();
	}
};
