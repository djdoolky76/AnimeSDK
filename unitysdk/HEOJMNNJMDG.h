#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEOJMNNJMDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E42070)

inline static constexpr unsigned int HEOJMNNJMDG_TypeDefinitionIndex = 85381;

class HEOJMNNJMDG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GKKGAJJPLBA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HEOJMNNJMDG_TypeDefinitionIndex)->GetStaticField(0x46450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOJMNNJMDG__CCTOR_OFFSET))();
	}
};
