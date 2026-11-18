#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDHHCDNGLHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AEC630)

inline static constexpr unsigned int HDHHCDNGLHD_TypeDefinitionIndex = 64344;

class HDHHCDNGLHD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BAPGOCCEDCF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HDHHCDNGLHD_TypeDefinitionIndex)->GetStaticField(0x51430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHHCDNGLHD__CCTOR_OFFSET))();
	}
};
