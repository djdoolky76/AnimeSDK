#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJIMMKNJMFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1435A8B0)

inline static constexpr unsigned int AJIMMKNJMFD_TypeDefinitionIndex = 76639;

class AJIMMKNJMFD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PHAMDMBPDKO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AJIMMKNJMFD_TypeDefinitionIndex)->GetStaticField(0x3D360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJIMMKNJMFD__CCTOR_OFFSET))();
	}
};
