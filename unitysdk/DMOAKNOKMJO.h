#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMOAKNOKMJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x148BA890)

inline static constexpr unsigned int DMOAKNOKMJO_TypeDefinitionIndex = 45217;

class DMOAKNOKMJO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LENGIBBGGFI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DMOAKNOKMJO_TypeDefinitionIndex)->GetStaticField(0x3AA50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOAKNOKMJO__CCTOR_OFFSET))();
	}
};
