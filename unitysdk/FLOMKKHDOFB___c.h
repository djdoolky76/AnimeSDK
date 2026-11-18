#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define FLOMKKHDOFB___C_DFLPNAIPAGG_OFFSET UNITYSDK_OFFSET(0x132286B0)
#define FLOMKKHDOFB___C_HFKAICAEBCP_OFFSET UNITYSDK_OFFSET(0x132286A0)
#define FLOMKKHDOFB___C_KJIHFMBBPPP_OFFSET UNITYSDK_OFFSET(0x132286C0)
#define FLOMKKHDOFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13228650)
#define FLOMKKHDOFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13228690)

inline static constexpr unsigned int FLOMKKHDOFB___c_TypeDefinitionIndex = 79815;

class FLOMKKHDOFB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__29_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FLOMKKHDOFB___c_TypeDefinitionIndex)->GetStaticField(0x31A40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FLOMKKHDOFB___c_TypeDefinitionIndex)->GetStaticField(0x31A48);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__31_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FLOMKKHDOFB___c_TypeDefinitionIndex)->GetStaticField(0x31A50);
	}
	static ::System::Action** StaticGet___9__29_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FLOMKKHDOFB___c_TypeDefinitionIndex)->GetStaticField(0x31A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOMKKHDOFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOMKKHDOFB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HFKAICAEBCP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOMKKHDOFB___C_HFKAICAEBCP_OFFSET))(this);
	}

	::System::Void DFLPNAIPAGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOMKKHDOFB___C_DFLPNAIPAGG_OFFSET))(this);
	}

	::System::Void KJIHFMBBPPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOMKKHDOFB___C_KJIHFMBBPPP_OFFSET))(this);
	}
};
