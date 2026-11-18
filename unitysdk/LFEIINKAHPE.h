#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFEIINKAHPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12560550)

inline static constexpr unsigned int LFEIINKAHPE_TypeDefinitionIndex = 55999;

class LFEIINKAHPE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LKDPJIJACAM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LFEIINKAHPE_TypeDefinitionIndex)->GetStaticField(0x41620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEIINKAHPE__CCTOR_OFFSET))();
	}
};
