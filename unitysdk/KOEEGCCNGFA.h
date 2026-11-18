#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KOEEGCCNGFA_LEEFMEFMJAN_OFFSET UNITYSDK_OFFSET(0x1A2DE660)
#define KOEEGCCNGFA_LGIMEODHNLI_OFFSET UNITYSDK_OFFSET(0x1A2DE7F0)
#define KOEEGCCNGFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE620)

inline static constexpr unsigned int KOEEGCCNGFA_TypeDefinitionIndex = 41418;

class KOEEGCCNGFA : public ::System::Object
{
public:
	static ::System::String** StaticGet_FPBPBEHKPND()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KOEEGCCNGFA_TypeDefinitionIndex)->GetStaticField(0x4A110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEEGCCNGFA__CCTOR_OFFSET))();
	}

	static ::System::Int32 LEEFMEFMJAN(::System::Int32 NJNCGJLHLKC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + KOEEGCCNGFA_LEEFMEFMJAN_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Int32 LGIMEODHNLI()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + KOEEGCCNGFA_LGIMEODHNLI_OFFSET))();
	}
};
