#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MFPIGPFGENO__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F49770)

inline static constexpr unsigned int MFPIGPFGENO_TypeDefinitionIndex = 41304;

class MFPIGPFGENO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PANENNIPLPD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MFPIGPFGENO_TypeDefinitionIndex)->GetStaticField(0x3E7E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFPIGPFGENO__CCTOR_OFFSET))();
	}
};
