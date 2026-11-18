#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDJEMIJDICB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDF70)

inline static constexpr unsigned int LDJEMIJDICB_TypeDefinitionIndex = 45783;

class LDJEMIJDICB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IDBKLIEHEEN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LDJEMIJDICB_TypeDefinitionIndex)->GetStaticField(0x4A190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJEMIJDICB__CCTOR_OFFSET))();
	}
};
