#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KONIFHFMEIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x129ADD80)

inline static constexpr unsigned int KONIFHFMEIH_TypeDefinitionIndex = 80157;

class KONIFHFMEIH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IMFAIEPGEHF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KONIFHFMEIH_TypeDefinitionIndex)->GetStaticField(0x414E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KONIFHFMEIH__CCTOR_OFFSET))();
	}
};
