#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoKeyBelongMap; }
namespace System { template <typename T> class Action_1; }

#define AANOMDNBAHD___C_NICBOPIEIJJ_OFFSET UNITYSDK_OFFSET(0x154C3D80)
#define AANOMDNBAHD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154C3D30)
#define AANOMDNBAHD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154C3D70)

inline static constexpr unsigned int AANOMDNBAHD___c_TypeDefinitionIndex = 67892;

class AANOMDNBAHD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD___c_TypeDefinitionIndex)->GetStaticField(0x36930);
	}
	static ::System::Action_1<::MoleMole::Config::EffectPatternInfoKeyBelongMap*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::MoleMole::Config::EffectPatternInfoKeyBelongMap*>**)Il2CppClass::FromTypeDefinitionIndex(AANOMDNBAHD___c_TypeDefinitionIndex)->GetStaticField(0x36938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANOMDNBAHD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANOMDNBAHD___C__CTOR_OFFSET))(this);
	}

	::System::Void NICBOPIEIJJ(::MoleMole::Config::EffectPatternInfoKeyBelongMap* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoKeyBelongMap*))((::PBYTE)hIl2Cpp + AANOMDNBAHD___C_NICBOPIEIJJ_OFFSET))(this, MDLNMDJMMJP);
	}
};
