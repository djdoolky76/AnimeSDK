#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_FAPIKAILLEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D7CE30)

inline static constexpr unsigned int DMOECAGFOMN_FAPIKAILLEM_TypeDefinitionIndex = 38275;

class DMOECAGFOMN_FAPIKAILLEM : public ::System::Object
{
public:
	static ::System::String** StaticGet_ILFEHMJFKHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_FAPIKAILLEM_TypeDefinitionIndex)->GetStaticField(0x40550);
	}
	static ::System::String** StaticGet_FNJBLCFAFKN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_FAPIKAILLEM_TypeDefinitionIndex)->GetStaticField(0x40558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_FAPIKAILLEM__CCTOR_OFFSET))();
	}
};
