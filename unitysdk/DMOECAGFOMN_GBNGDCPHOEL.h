#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_GBNGDCPHOEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E5A200)

inline static constexpr unsigned int DMOECAGFOMN_GBNGDCPHOEL_TypeDefinitionIndex = 38285;

class DMOECAGFOMN_GBNGDCPHOEL : public ::System::Object
{
public:
	static ::System::String** StaticGet_CMABCBIIODI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_GBNGDCPHOEL_TypeDefinitionIndex)->GetStaticField(0x447B0);
	}
	static ::System::String** StaticGet_LKEAOOCPDLJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_GBNGDCPHOEL_TypeDefinitionIndex)->GetStaticField(0x447B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_GBNGDCPHOEL__CCTOR_OFFSET))();
	}
};
