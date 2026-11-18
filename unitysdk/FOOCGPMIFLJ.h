#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOOCGPMIFLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B9030)

inline static constexpr unsigned int FOOCGPMIFLJ_TypeDefinitionIndex = 76126;

class FOOCGPMIFLJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HCNCALOGIKG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FOOCGPMIFLJ_TypeDefinitionIndex)->GetStaticField(0x4E470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOCGPMIFLJ__CCTOR_OFFSET))();
	}
};
