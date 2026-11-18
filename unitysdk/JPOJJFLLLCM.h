#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPOJJFLLLCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x130A6E20)

inline static constexpr unsigned int JPOJJFLLLCM_TypeDefinitionIndex = 42451;

class JPOJJFLLLCM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ADJHDDNFEAM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JPOJJFLLLCM_TypeDefinitionIndex)->GetStaticField(0x4A030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPOJJFLLLCM__CCTOR_OFFSET))();
	}
};
