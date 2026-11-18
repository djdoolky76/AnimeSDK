#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FMLJBEKCCBG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13229F10)

inline static constexpr unsigned int FMLJBEKCCBG_TypeDefinitionIndex = 91576;

class FMLJBEKCCBG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NIFCGGFJGFE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FMLJBEKCCBG_TypeDefinitionIndex)->GetStaticField(0x31A60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMLJBEKCCBG__CCTOR_OFFSET))();
	}
};
