#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPANKFGBJIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DB0230)

inline static constexpr unsigned int NPANKFGBJIP_TypeDefinitionIndex = 82651;

class NPANKFGBJIP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GKMAKHJMFHJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPANKFGBJIP_TypeDefinitionIndex)->GetStaticField(0x4C710);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPANKFGBJIP__CCTOR_OFFSET))();
	}
};
