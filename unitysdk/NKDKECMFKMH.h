#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKDKECMFKMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D7D0A0)

inline static constexpr unsigned int NKDKECMFKMH_TypeDefinitionIndex = 83446;

class NKDKECMFKMH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OBHFKBDGPIG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NKDKECMFKMH_TypeDefinitionIndex)->GetStaticField(0x4C690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKDKECMFKMH__CCTOR_OFFSET))();
	}
};
