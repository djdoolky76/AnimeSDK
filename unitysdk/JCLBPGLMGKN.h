#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JCLBPGLMGKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x160D9050)

inline static constexpr unsigned int JCLBPGLMGKN_TypeDefinitionIndex = 43368;

class JCLBPGLMGKN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MJFOMALCLIE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JCLBPGLMGKN_TypeDefinitionIndex)->GetStaticField(0x4E5F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLBPGLMGKN__CCTOR_OFFSET))();
	}
};
