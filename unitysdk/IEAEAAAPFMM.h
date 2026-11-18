#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEAEAAAPFMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1539F960)

inline static constexpr unsigned int IEAEAAAPFMM_TypeDefinitionIndex = 59962;

class IEAEAAAPFMM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IBCEIIEGJHB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IEAEAAAPFMM_TypeDefinitionIndex)->GetStaticField(0x443C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEAEAAAPFMM__CCTOR_OFFSET))();
	}
};
