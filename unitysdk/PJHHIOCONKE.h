#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJHHIOCONKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7B30)

inline static constexpr unsigned int PJHHIOCONKE_TypeDefinitionIndex = 75261;

class PJHHIOCONKE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KMIMBNADNDM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PJHHIOCONKE_TypeDefinitionIndex)->GetStaticField(0x493C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJHHIOCONKE__CCTOR_OFFSET))();
	}
};
