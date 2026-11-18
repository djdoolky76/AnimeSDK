#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALKEJPCNBIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648D2F0)

inline static constexpr unsigned int ALKEJPCNBIA_TypeDefinitionIndex = 63448;

class ALKEJPCNBIA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JHAFBBKGKIM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ALKEJPCNBIA_TypeDefinitionIndex)->GetStaticField(0x49680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALKEJPCNBIA__CCTOR_OFFSET))();
	}
};
