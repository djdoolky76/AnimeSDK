#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLKDGPCCHLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B2AE0)

inline static constexpr unsigned int DLKDGPCCHLJ_TypeDefinitionIndex = 70231;

class DLKDGPCCHLJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ADBMLNDGDBO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DLKDGPCCHLJ_TypeDefinitionIndex)->GetStaticField(0x3A990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLKDGPCCHLJ__CCTOR_OFFSET))();
	}
};
