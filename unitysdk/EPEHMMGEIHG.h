#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPEHMMGEIHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x161699F0)

inline static constexpr unsigned int EPEHMMGEIHG_TypeDefinitionIndex = 55646;

class EPEHMMGEIHG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LCLAPPPHEBC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EPEHMMGEIHG_TypeDefinitionIndex)->GetStaticField(0x49AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPEHMMGEIHG__CCTOR_OFFSET))();
	}
};
