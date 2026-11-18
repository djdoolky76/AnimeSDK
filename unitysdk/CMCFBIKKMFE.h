#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CMCFBIKKMFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15340030)

inline static constexpr unsigned int CMCFBIKKMFE_TypeDefinitionIndex = 80322;

class CMCFBIKKMFE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EBHCPFEFGIH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CMCFBIKKMFE_TypeDefinitionIndex)->GetStaticField(0x3A720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMCFBIKKMFE__CCTOR_OFFSET))();
	}
};
