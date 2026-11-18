#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FPIANKNEJDM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C7EF60)

inline static constexpr unsigned int FPIANKNEJDM_TypeDefinitionIndex = 88107;

class FPIANKNEJDM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DBBDABNGGPM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FPIANKNEJDM_TypeDefinitionIndex)->GetStaticField(0x4CF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPIANKNEJDM__CCTOR_OFFSET))();
	}
};
