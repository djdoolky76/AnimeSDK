#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OONFHDNIIJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F93E60)

inline static constexpr unsigned int OONFHDNIIJJ_TypeDefinitionIndex = 78826;

class OONFHDNIIJJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JNEPEJCMPEC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OONFHDNIIJJ_TypeDefinitionIndex)->GetStaticField(0x4DE30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONFHDNIIJJ__CCTOR_OFFSET))();
	}
};
