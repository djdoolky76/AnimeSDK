#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMIBLEFDPBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13457CC0)

inline static constexpr unsigned int DMIBLEFDPBD_TypeDefinitionIndex = 80840;

class DMIBLEFDPBD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CBJCGLKMGIP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DMIBLEFDPBD_TypeDefinitionIndex)->GetStaticField(0x37360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMIBLEFDPBD__CCTOR_OFFSET))();
	}
};
