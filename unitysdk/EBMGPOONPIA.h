#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EBMGPOONPIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062BE00)

inline static constexpr unsigned int EBMGPOONPIA_TypeDefinitionIndex = 82232;

class EBMGPOONPIA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EOGHFCMGPNN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EBMGPOONPIA_TypeDefinitionIndex)->GetStaticField(0x406D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMGPOONPIA__CCTOR_OFFSET))();
	}
};
