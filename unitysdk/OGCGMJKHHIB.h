#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGCGMJKHHIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B28910)

inline static constexpr unsigned int OGCGMJKHHIB_TypeDefinitionIndex = 88802;

class OGCGMJKHHIB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FLMEAEIEDGF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OGCGMJKHHIB_TypeDefinitionIndex)->GetStaticField(0x51000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGCGMJKHHIB__CCTOR_OFFSET))();
	}
};
