#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGFOCCJPLGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CE24A0)

inline static constexpr unsigned int GGFOCCJPLGJ_TypeDefinitionIndex = 85194;

class GGFOCCJPLGJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EHNCPPCJKPA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GGFOCCJPLGJ_TypeDefinitionIndex)->GetStaticField(0x4F500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFOCCJPLGJ__CCTOR_OFFSET))();
	}
};
