#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HBEEHBCOIJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D94650)

inline static constexpr unsigned int HBEEHBCOIJI_TypeDefinitionIndex = 62347;

class HBEEHBCOIJI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IHJGNLDOJFK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HBEEHBCOIJI_TypeDefinitionIndex)->GetStaticField(0x40B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBEEHBCOIJI__CCTOR_OFFSET))();
	}
};
