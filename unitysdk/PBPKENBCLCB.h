#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBPKENBCLCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x12962F10)

inline static constexpr unsigned int PBPKENBCLCB_TypeDefinitionIndex = 87107;

class PBPKENBCLCB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HJAMDAHJACB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PBPKENBCLCB_TypeDefinitionIndex)->GetStaticField(0x4C970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPKENBCLCB__CCTOR_OFFSET))();
	}
};
