#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPKJJCAKMEO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18168990)

inline static constexpr unsigned int GPKJJCAKMEO_TypeDefinitionIndex = 46734;

class GPKJJCAKMEO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DENEFCBBJMM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GPKJJCAKMEO_TypeDefinitionIndex)->GetStaticField(0x3B080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPKJJCAKMEO__CCTOR_OFFSET))();
	}
};
