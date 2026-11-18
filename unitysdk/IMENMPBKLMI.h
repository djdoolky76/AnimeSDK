#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IMENMPBKLMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AAC400)

inline static constexpr unsigned int IMENMPBKLMI_TypeDefinitionIndex = 88714;

class IMENMPBKLMI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JDNALKHNBDL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IMENMPBKLMI_TypeDefinitionIndex)->GetStaticField(0x51F70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMENMPBKLMI__CCTOR_OFFSET))();
	}
};
