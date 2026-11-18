#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOHNEFJDOGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1491ACF0)

inline static constexpr unsigned int GOHNEFJDOGL_TypeDefinitionIndex = 69761;

class GOHNEFJDOGL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CBJILLBFNFM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GOHNEFJDOGL_TypeDefinitionIndex)->GetStaticField(0x441B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOHNEFJDOGL__CCTOR_OFFSET))();
	}
};
