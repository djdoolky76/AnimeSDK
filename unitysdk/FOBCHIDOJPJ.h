#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOBCHIDOJPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14115430)

inline static constexpr unsigned int FOBCHIDOJPJ_TypeDefinitionIndex = 90666;

class FOBCHIDOJPJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_COBEKBPDCAD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FOBCHIDOJPJ_TypeDefinitionIndex)->GetStaticField(0x50810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBCHIDOJPJ__CCTOR_OFFSET))();
	}
};
