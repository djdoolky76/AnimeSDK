#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBIBFECKAMB__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB32990)

inline static constexpr unsigned int FBIBFECKAMB_TypeDefinitionIndex = 53070;

class FBIBFECKAMB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BEHDCDPFGCH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FBIBFECKAMB_TypeDefinitionIndex)->GetStaticField(0x47EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBIBFECKAMB__CCTOR_OFFSET))();
	}
};
