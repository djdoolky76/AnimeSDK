#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFAMOMAKALG__CCTOR_OFFSET UNITYSDK_OFFSET(0x169EA5B0)

inline static constexpr unsigned int BFAMOMAKALG_TypeDefinitionIndex = 76296;

class BFAMOMAKALG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FNILCGJFFEG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFAMOMAKALG_TypeDefinitionIndex)->GetStaticField(0x4E120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAMOMAKALG__CCTOR_OFFSET))();
	}
};
