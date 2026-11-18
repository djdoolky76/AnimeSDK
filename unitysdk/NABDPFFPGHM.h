#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NABDPFFPGHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C21910)

inline static constexpr unsigned int NABDPFFPGHM_TypeDefinitionIndex = 74847;

class NABDPFFPGHM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OEEIGKAIACI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NABDPFFPGHM_TypeDefinitionIndex)->GetStaticField(0x47420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NABDPFFPGHM__CCTOR_OFFSET))();
	}
};
