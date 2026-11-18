#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EIFGGLMJLIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1354C3A0)

inline static constexpr unsigned int EIFGGLMJLIM_TypeDefinitionIndex = 40190;

class EIFGGLMJLIM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HEMPHNFOBDB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EIFGGLMJLIM_TypeDefinitionIndex)->GetStaticField(0x50770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFGGLMJLIM__CCTOR_OFFSET))();
	}
};
