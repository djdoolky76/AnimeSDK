#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFEKGJBOPNE.h"
#include "unitysdk/System/Object.h"

class MEMPIHFBILL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BOKKOCFLOPI___C_BABFLEJAMAP_OFFSET UNITYSDK_OFFSET(0x142607E0)
#define BOKKOCFLOPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14260790)
#define BOKKOCFLOPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142607D0)

inline static constexpr unsigned int BOKKOCFLOPI___c_TypeDefinitionIndex = 65887;

class BOKKOCFLOPI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BOKKOCFLOPI___c_TypeDefinitionIndex)->GetStaticField(0x47BD0);
	}
	static ::System::Func_2<::MEMPIHFBILL*, ::HFEKGJBOPNE>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::MEMPIHFBILL*, ::HFEKGJBOPNE>**)Il2CppClass::FromTypeDefinitionIndex(BOKKOCFLOPI___c_TypeDefinitionIndex)->GetStaticField(0x47BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOKKOCFLOPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKKOCFLOPI___C__CTOR_OFFSET))(this);
	}

	::HFEKGJBOPNE BABFLEJAMAP(::MEMPIHFBILL* PAAKENELHJL)
	{
		return ((::HFEKGJBOPNE(*)(::PVOID, ::MEMPIHFBILL*))((::PBYTE)hIl2Cpp + BOKKOCFLOPI___C_BABFLEJAMAP_OFFSET))(this, PAAKENELHJL);
	}
};
