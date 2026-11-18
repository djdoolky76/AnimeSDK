#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CANPAGICPGB__CCTOR_OFFSET UNITYSDK_OFFSET(0x199F0690)

inline static constexpr unsigned int CANPAGICPGB_TypeDefinitionIndex = 50338;

class CANPAGICPGB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MDIKNHIHEIP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CANPAGICPGB_TypeDefinitionIndex)->GetStaticField(0x37000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANPAGICPGB__CCTOR_OFFSET))();
	}
};
