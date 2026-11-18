#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_DEFLPKCDCPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x12092470)

inline static constexpr unsigned int DMOECAGFOMN_DEFLPKCDCPP_TypeDefinitionIndex = 38281;

class DMOECAGFOMN_DEFLPKCDCPP : public ::System::Object
{
public:
	static ::System::String** StaticGet_MHOHNNGOEFA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_DEFLPKCDCPP_TypeDefinitionIndex)->GetStaticField(0x431E0);
	}
	static ::System::String** StaticGet_BEGGKPBDKCI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_DEFLPKCDCPP_TypeDefinitionIndex)->GetStaticField(0x431E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_DEFLPKCDCPP__CCTOR_OFFSET))();
	}
};
