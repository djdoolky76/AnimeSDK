#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KANECPEBLOO___C_GHLGMOFINEM_OFFSET UNITYSDK_OFFSET(0x14FC90A0)
#define KANECPEBLOO___C_IKOOMDIMILP_OFFSET UNITYSDK_OFFSET(0x14FC9070)
#define KANECPEBLOO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FC9020)
#define KANECPEBLOO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC9060)

inline static constexpr unsigned int KANECPEBLOO___c_TypeDefinitionIndex = 79571;

class KANECPEBLOO___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KANECPEBLOO___c_TypeDefinitionIndex)->GetStaticField(0x3B730);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KANECPEBLOO___c_TypeDefinitionIndex)->GetStaticField(0x3B738);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KANECPEBLOO___c_TypeDefinitionIndex)->GetStaticField(0x3B740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KANECPEBLOO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO___C__CTOR_OFFSET))(this);
	}

	::System::Void IKOOMDIMILP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO___C_IKOOMDIMILP_OFFSET))(this);
	}

	::System::Void GHLGMOFINEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO___C_GHLGMOFINEM_OFFSET))(this);
	}
};
