#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLPGJCHEEBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F8C370)

inline static constexpr unsigned int OLPGJCHEEBA_TypeDefinitionIndex = 38544;

class OLPGJCHEEBA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AOCEKKDIBDJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OLPGJCHEEBA_TypeDefinitionIndex)->GetStaticField(0x49220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPGJCHEEBA__CCTOR_OFFSET))();
	}
};
