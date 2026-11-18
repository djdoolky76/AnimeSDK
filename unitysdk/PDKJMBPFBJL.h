#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PDKJMBPFBJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B93A0)

inline static constexpr unsigned int PDKJMBPFBJL_TypeDefinitionIndex = 82969;

class PDKJMBPFBJL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JNGEANMFHPI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PDKJMBPFBJL_TypeDefinitionIndex)->GetStaticField(0x478D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKJMBPFBJL__CCTOR_OFFSET))();
	}
};
