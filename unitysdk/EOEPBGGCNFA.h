#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOEPBGGCNFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1237D500)

inline static constexpr unsigned int EOEPBGGCNFA_TypeDefinitionIndex = 59573;

class EOEPBGGCNFA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EEIJKKMDDBH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EOEPBGGCNFA_TypeDefinitionIndex)->GetStaticField(0x40880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOEPBGGCNFA__CCTOR_OFFSET))();
	}
};
