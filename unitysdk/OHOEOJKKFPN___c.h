#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHIOADBIPH;
namespace System { template <typename T> class Action_1; }

#define OHOEOJKKFPN___C_FMGFJOCMMOA_OFFSET UNITYSDK_OFFSET(0xF1940E0)
#define OHOEOJKKFPN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF194090)
#define OHOEOJKKFPN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF1940D0)

inline static constexpr unsigned int OHOEOJKKFPN___c_TypeDefinitionIndex = 71319;

class OHOEOJKKFPN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OHOEOJKKFPN___c_TypeDefinitionIndex)->GetStaticField(0x47800);
	}
	static ::System::Action_1<::JMHIOADBIPH*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::JMHIOADBIPH*>**)Il2CppClass::FromTypeDefinitionIndex(OHOEOJKKFPN___c_TypeDefinitionIndex)->GetStaticField(0x47808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHOEOJKKFPN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOJKKFPN___C__CTOR_OFFSET))(this);
	}

	::System::Void FMGFJOCMMOA(::JMHIOADBIPH* DLJPLHKELCO)
	{
		return ((::System::Void(*)(::PVOID, ::JMHIOADBIPH*))((::PBYTE)hIl2Cpp + OHOEOJKKFPN___C_FMGFJOCMMOA_OFFSET))(this, DLJPLHKELCO);
	}
};
