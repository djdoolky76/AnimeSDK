#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PPGDBNGAOPK___C_KNDPFNIONMC_OFFSET UNITYSDK_OFFSET(0x1D63A140)
#define PPGDBNGAOPK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D63A0F0)
#define PPGDBNGAOPK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63A130)

inline static constexpr unsigned int PPGDBNGAOPK___c_TypeDefinitionIndex = 70861;

class PPGDBNGAOPK___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PPGDBNGAOPK___c_TypeDefinitionIndex)->GetStaticField(0x4B2E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PPGDBNGAOPK___c_TypeDefinitionIndex)->GetStaticField(0x4B2E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGDBNGAOPK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK___C__CTOR_OFFSET))(this);
	}

	::System::Void KNDPFNIONMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK___C_KNDPFNIONMC_OFFSET))(this);
	}
};
