#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_OLPDMBECHMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC7D50)

inline static constexpr unsigned int DMOECAGFOMN_OLPDMBECHMI_TypeDefinitionIndex = 38270;

class DMOECAGFOMN_OLPDMBECHMI : public ::System::Object
{
public:
	static ::System::String** StaticGet_BMOLIEKNLBE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_OLPDMBECHMI_TypeDefinitionIndex)->GetStaticField(0x407C0);
	}
	static ::System::String** StaticGet_LDFCONFKOOA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_OLPDMBECHMI_TypeDefinitionIndex)->GetStaticField(0x407C8);
	}
	static ::System::String** StaticGet_ILFEHMJFKHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_OLPDMBECHMI_TypeDefinitionIndex)->GetStaticField(0x407D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_OLPDMBECHMI__CCTOR_OFFSET))();
	}
};
