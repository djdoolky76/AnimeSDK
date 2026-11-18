#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JIHCMJMECCO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13088400)

inline static constexpr unsigned int JIHCMJMECCO_TypeDefinitionIndex = 65209;

class JIHCMJMECCO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JCGABKNEJLC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JIHCMJMECCO_TypeDefinitionIndex)->GetStaticField(0x49F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHCMJMECCO__CCTOR_OFFSET))();
	}
};
