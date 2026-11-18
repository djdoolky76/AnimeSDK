#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIGIEFFDAHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D2DC0)

inline static constexpr unsigned int GIGIEFFDAHM_TypeDefinitionIndex = 53997;

class GIGIEFFDAHM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BKIKIMIOKHE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GIGIEFFDAHM_TypeDefinitionIndex)->GetStaticField(0x4E4A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGIEFFDAHM__CCTOR_OFFSET))();
	}
};
