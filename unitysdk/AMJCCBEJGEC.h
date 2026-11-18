#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AMJCCBEJGEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CE13D0)

inline static constexpr unsigned int AMJCCBEJGEC_TypeDefinitionIndex = 60996;

class AMJCCBEJGEC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MCGDHLBNPDD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AMJCCBEJGEC_TypeDefinitionIndex)->GetStaticField(0x3A340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJCCBEJGEC__CCTOR_OFFSET))();
	}
};
