#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMNBKDOEKAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18454220)

inline static constexpr unsigned int OMNBKDOEKAA_TypeDefinitionIndex = 86606;

class OMNBKDOEKAA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DIOFKKELMBM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OMNBKDOEKAA_TypeDefinitionIndex)->GetStaticField(0x45900);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNBKDOEKAA__CCTOR_OFFSET))();
	}
};
