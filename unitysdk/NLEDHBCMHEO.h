#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NLEDHBCMHEO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1159E570)

inline static constexpr unsigned int NLEDHBCMHEO_TypeDefinitionIndex = 65440;

class NLEDHBCMHEO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LIFNOGDPIEG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLEDHBCMHEO_TypeDefinitionIndex)->GetStaticField(0x35C00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLEDHBCMHEO__CCTOR_OFFSET))();
	}
};
