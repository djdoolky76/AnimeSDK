#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGHJPPMADBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A607010)

inline static constexpr unsigned int LGHJPPMADBI_TypeDefinitionIndex = 75719;

class LGHJPPMADBI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KBKEBINBPFC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LGHJPPMADBI_TypeDefinitionIndex)->GetStaticField(0x4D5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHJPPMADBI__CCTOR_OFFSET))();
	}
};
