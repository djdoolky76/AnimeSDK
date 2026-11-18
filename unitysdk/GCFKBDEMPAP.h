#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GCFKBDEMPAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DEC70)

inline static constexpr unsigned int GCFKBDEMPAP_TypeDefinitionIndex = 45514;

class GCFKBDEMPAP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PGLOCKIFLAO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GCFKBDEMPAP_TypeDefinitionIndex)->GetStaticField(0x40A00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFKBDEMPAP__CCTOR_OFFSET))();
	}
};
