#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNFLONAGLCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2D6510)

inline static constexpr unsigned int KNFLONAGLCE_TypeDefinitionIndex = 60813;

class KNFLONAGLCE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PPMELFIEDHO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KNFLONAGLCE_TypeDefinitionIndex)->GetStaticField(0x4A100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNFLONAGLCE__CCTOR_OFFSET))();
	}
};
