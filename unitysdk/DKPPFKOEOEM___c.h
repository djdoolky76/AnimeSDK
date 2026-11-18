#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DKPPFKOEOEM___C_JGCLGDGFBFM_OFFSET UNITYSDK_OFFSET(0x19417850)
#define DKPPFKOEOEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19417800)
#define DKPPFKOEOEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19417840)

inline static constexpr unsigned int DKPPFKOEOEM___c_TypeDefinitionIndex = 53216;

class DKPPFKOEOEM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__30_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DKPPFKOEOEM___c_TypeDefinitionIndex)->GetStaticField(0x314D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DKPPFKOEOEM___c_TypeDefinitionIndex)->GetStaticField(0x314D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKPPFKOEOEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JGCLGDGFBFM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM___C_JGCLGDGFBFM_OFFSET))(this);
	}
};
