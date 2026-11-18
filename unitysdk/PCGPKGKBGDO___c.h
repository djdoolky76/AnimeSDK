#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PCGPKGKBGDO___C_MGBEKHCPEKC_OFFSET UNITYSDK_OFFSET(0x17313D80)
#define PCGPKGKBGDO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17313D30)
#define PCGPKGKBGDO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17313D70)

inline static constexpr unsigned int PCGPKGKBGDO___c_TypeDefinitionIndex = 58853;

class PCGPKGKBGDO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCGPKGKBGDO___c_TypeDefinitionIndex)->GetStaticField(0x39DA0);
	}
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PCGPKGKBGDO___c_TypeDefinitionIndex)->GetStaticField(0x39DA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGPKGKBGDO___C__CTOR_OFFSET))(this);
	}

	::System::Void MGBEKHCPEKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGPKGKBGDO___C_MGBEKHCPEKC_OFFSET))(this);
	}
};
