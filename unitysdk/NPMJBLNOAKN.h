#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPMJBLNOAKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DD430)

inline static constexpr unsigned int NPMJBLNOAKN_TypeDefinitionIndex = 74171;

class NPMJBLNOAKN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JPKIHOMJMFB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPMJBLNOAKN_TypeDefinitionIndex)->GetStaticField(0x4FD60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPMJBLNOAKN__CCTOR_OFFSET))();
	}
};
