#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIOOGOPPIKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11494E20)

inline static constexpr unsigned int NIOOGOPPIKM_TypeDefinitionIndex = 77785;

class NIOOGOPPIKM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EOOHOKKBJDB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NIOOGOPPIKM_TypeDefinitionIndex)->GetStaticField(0x4FCC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIOOGOPPIKM__CCTOR_OFFSET))();
	}
};
