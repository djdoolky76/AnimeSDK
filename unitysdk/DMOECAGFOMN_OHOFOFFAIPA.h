#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_OHOFOFFAIPA__CCTOR_OFFSET UNITYSDK_OFFSET(0x132A34E0)

inline static constexpr unsigned int DMOECAGFOMN_OHOFOFFAIPA_TypeDefinitionIndex = 38266;

class DMOECAGFOMN_OHOFOFFAIPA : public ::System::Object
{
public:
	static ::System::String** StaticGet_PENFPGIPJAK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_OHOFOFFAIPA_TypeDefinitionIndex)->GetStaticField(0x488B0);
	}
	static ::System::String** StaticGet_BGFGAAPFICL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_OHOFOFFAIPA_TypeDefinitionIndex)->GetStaticField(0x488B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_OHOFOFFAIPA__CCTOR_OFFSET))();
	}
};
