#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDJAKIGECFJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x130B31A0)

inline static constexpr unsigned int KDJAKIGECFJ_TypeDefinitionIndex = 69487;

class KDJAKIGECFJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DNLMOFOLEKB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KDJAKIGECFJ_TypeDefinitionIndex)->GetStaticField(0x4A0A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDJAKIGECFJ__CCTOR_OFFSET))();
	}
};
