#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KACPLGJONDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x130A6EB0)

inline static constexpr unsigned int KACPLGJONDL_TypeDefinitionIndex = 90708;

class KACPLGJONDL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MBANCJLAMCF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KACPLGJONDL_TypeDefinitionIndex)->GetStaticField(0x4A040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KACPLGJONDL__CCTOR_OFFSET))();
	}
};
