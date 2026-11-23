#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define E6F71772C4080305_F5628F8349D4A8A6_AFDE5547A3777486_OFFSET UNITYSDK_OFFSET(0x3F5B9D0)
#define E6F71772C4080305_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F5BA50)
#define E6F71772C4080305_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6F71772C4080305_F5628F8349D4A8A6_TypeDefinitionIndex = 14201;

class E6F71772C4080305_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E6F71772C4080305_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E6F71772C4080305_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E6F71772C4080305_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet_B3B5BB714B5D4029()
	{
		return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(E6F71772C4080305_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E6F71772C4080305_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6F71772C4080305_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean AFDE5547A3777486(::System::Char E9B1EC1226C9BC85)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + E6F71772C4080305_F5628F8349D4A8A6_AFDE5547A3777486_OFFSET))(this, E9B1EC1226C9BC85);
	}
};
