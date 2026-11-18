#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DJAFAJDGHLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D65720)

inline static constexpr unsigned int DJAFAJDGHLB_TypeDefinitionIndex = 52523;

class DJAFAJDGHLB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FBCDPLKIMNB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DJAFAJDGHLB_TypeDefinitionIndex)->GetStaticField(0x404B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJAFAJDGHLB__CCTOR_OFFSET))();
	}
};
