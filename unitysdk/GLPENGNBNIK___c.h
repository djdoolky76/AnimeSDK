#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { template <typename T> class Comparison_1; }

#define GLPENGNBNIK___C_LMMPJJJLEIJ_OFFSET UNITYSDK_OFFSET(0x1490D420)
#define GLPENGNBNIK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1490D3D0)
#define GLPENGNBNIK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1490D410)

inline static constexpr unsigned int GLPENGNBNIK___c_TypeDefinitionIndex = 86957;

class GLPENGNBNIK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::Config::ConfigAbilityTargetData*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::ConfigAbilityTargetData*>**)Il2CppClass::FromTypeDefinitionIndex(GLPENGNBNIK___c_TypeDefinitionIndex)->GetStaticField(0x44190);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GLPENGNBNIK___c_TypeDefinitionIndex)->GetStaticField(0x44198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPENGNBNIK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LMMPJJJLEIJ(::MoleMole::Config::ConfigAbilityTargetData* EIHELBHCLID, ::MoleMole::Config::ConfigAbilityTargetData* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + GLPENGNBNIK___C_LMMPJJJLEIJ_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
