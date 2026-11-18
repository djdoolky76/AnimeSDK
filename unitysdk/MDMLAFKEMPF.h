#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDMLAFKEMPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C785C0)

inline static constexpr unsigned int MDMLAFKEMPF_TypeDefinitionIndex = 62657;

class MDMLAFKEMPF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OIFALHMDBMJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MDMLAFKEMPF_TypeDefinitionIndex)->GetStaticField(0x3BC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDMLAFKEMPF__CCTOR_OFFSET))();
	}
};
