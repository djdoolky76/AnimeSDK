#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JDHJGMJLIJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1306FB10)

inline static constexpr unsigned int JDHJGMJLIJP_TypeDefinitionIndex = 48798;

class JDHJGMJLIJP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ECAIINPHKPB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JDHJGMJLIJP_TypeDefinitionIndex)->GetStaticField(0x49ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDHJGMJLIJP__CCTOR_OFFSET))();
	}
};
