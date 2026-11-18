#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGIJKNIFEAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x106385B0)

inline static constexpr unsigned int EGIJKNIFEAM_TypeDefinitionIndex = 71448;

class EGIJKNIFEAM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ONIPHPEDCHP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EGIJKNIFEAM_TypeDefinitionIndex)->GetStaticField(0x40700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGIJKNIFEAM__CCTOR_OFFSET))();
	}
};
