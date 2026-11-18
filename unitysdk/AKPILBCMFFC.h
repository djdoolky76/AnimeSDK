#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKPILBCMFFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FFA760)

inline static constexpr unsigned int AKPILBCMFFC_TypeDefinitionIndex = 82704;

class AKPILBCMFFC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KOEPIFIGAJH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AKPILBCMFFC_TypeDefinitionIndex)->GetStaticField(0x42D20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKPILBCMFFC__CCTOR_OFFSET))();
	}
};
