#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JDNOOFLABGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ACBBF0)

inline static constexpr unsigned int JDNOOFLABGM_TypeDefinitionIndex = 87705;

class JDNOOFLABGM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MKJFAGIIICD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JDNOOFLABGM_TypeDefinitionIndex)->GetStaticField(0x38EE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNOOFLABGM__CCTOR_OFFSET))();
	}
};
