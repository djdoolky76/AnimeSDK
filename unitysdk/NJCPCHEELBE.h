#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJCPCHEELBE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE75FF70)

inline static constexpr unsigned int NJCPCHEELBE_TypeDefinitionIndex = 57321;

class NJCPCHEELBE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ODFACOJNPFK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NJCPCHEELBE_TypeDefinitionIndex)->GetStaticField(0x3F5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJCPCHEELBE__CCTOR_OFFSET))();
	}
};
