#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIHPMBMEALL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13217F10)

inline static constexpr unsigned int FIHPMBMEALL_TypeDefinitionIndex = 49083;

class FIHPMBMEALL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CPKJHEHFFJJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FIHPMBMEALL_TypeDefinitionIndex)->GetStaticField(0x31950);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIHPMBMEALL__CCTOR_OFFSET))();
	}
};
