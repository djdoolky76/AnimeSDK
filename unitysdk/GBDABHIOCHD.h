#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBDABHIOCHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x156EB2A0)

inline static constexpr unsigned int GBDABHIOCHD_TypeDefinitionIndex = 54710;

class GBDABHIOCHD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HMAACKLHPLG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GBDABHIOCHD_TypeDefinitionIndex)->GetStaticField(0x435C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBDABHIOCHD__CCTOR_OFFSET))();
	}
};
