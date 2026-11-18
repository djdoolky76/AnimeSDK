#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPPBHNLOHOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5A1800)

inline static constexpr unsigned int MPPBHNLOHOC_TypeDefinitionIndex = 81025;

class MPPBHNLOHOC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KDOHIPGPOIC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MPPBHNLOHOC_TypeDefinitionIndex)->GetStaticField(0x50B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPBHNLOHOC__CCTOR_OFFSET))();
	}
};
