#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LJDPLLFLEBC___C_EDKJDLKEEKM_OFFSET UNITYSDK_OFFSET(0x13CF1F60)
#define LJDPLLFLEBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CF1F10)
#define LJDPLLFLEBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF1F50)

inline static constexpr unsigned int LJDPLLFLEBC___c_TypeDefinitionIndex = 42762;

class LJDPLLFLEBC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LJDPLLFLEBC___c_TypeDefinitionIndex)->GetStaticField(0x4A240);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJDPLLFLEBC___c_TypeDefinitionIndex)->GetStaticField(0x4A248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDPLLFLEBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean EDKJDLKEEKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC___C_EDKJDLKEEKM_OFFSET))(this);
	}
};
