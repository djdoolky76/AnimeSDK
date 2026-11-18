#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFLLCJGMFKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D5CF20)

inline static constexpr unsigned int DFLLCJGMFKP_TypeDefinitionIndex = 92568;

class DFLLCJGMFKP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HIJLCDCAGCA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DFLLCJGMFKP_TypeDefinitionIndex)->GetStaticField(0x40470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFLLCJGMFKP__CCTOR_OFFSET))();
	}
};
