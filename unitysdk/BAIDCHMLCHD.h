#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAIDCHMLCHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x143C40E0)

inline static constexpr unsigned int BAIDCHMLCHD_TypeDefinitionIndex = 61869;

class BAIDCHMLCHD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AGPHOBMJOAJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BAIDCHMLCHD_TypeDefinitionIndex)->GetStaticField(0x4F1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAIDCHMLCHD__CCTOR_OFFSET))();
	}
};
