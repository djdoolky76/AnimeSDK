#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IADLPKJOHDL_PJDJAICKGJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BEE020)
#define IADLPKJOHDL_PJDJAICKGJG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BEE010)

inline static constexpr unsigned int IADLPKJOHDL_PJDJAICKGJG_TypeDefinitionIndex = 48260;

class IADLPKJOHDL_PJDJAICKGJG : public ::System::Object
{
public:
	static ::System::String** StaticGet_CMFEDMPGGLG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IADLPKJOHDL_PJDJAICKGJG_TypeDefinitionIndex)->GetStaticField(0x322B0);
	}
	static ::System::String** StaticGet_APFEDPAKDAG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IADLPKJOHDL_PJDJAICKGJG_TypeDefinitionIndex)->GetStaticField(0x322B8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADLPKJOHDL_PJDJAICKGJG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADLPKJOHDL_PJDJAICKGJG__CCTOR_OFFSET))();
	}
};
