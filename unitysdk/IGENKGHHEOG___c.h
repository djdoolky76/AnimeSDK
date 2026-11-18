#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { template <typename T> class Func_1; }

#define IGENKGHHEOG___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x16F63160)
#define IGENKGHHEOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F63110)
#define IGENKGHHEOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F63150)

inline static constexpr unsigned int IGENKGHHEOG___c_TypeDefinitionIndex = 73119;

class IGENKGHHEOG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IGENKGHHEOG___c_TypeDefinitionIndex)->GetStaticField(0x3E060);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigSpecialEffectHitData*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSpecialEffectHitData*>**)Il2CppClass::FromTypeDefinitionIndex(IGENKGHHEOG___c_TypeDefinitionIndex)->GetStaticField(0x3E068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGENKGHHEOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGENKGHHEOG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSpecialEffectHitData* MEMFHNGDGIN()
	{
		return ((::MoleMole::Config::ConfigSpecialEffectHitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGENKGHHEOG___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
