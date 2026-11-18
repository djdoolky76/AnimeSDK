#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { template <typename T> class Comparison_1; }

#define HFFIKHIMLDG___C_NADOIJGEBDE_OFFSET UNITYSDK_OFFSET(0x146F8200)
#define HFFIKHIMLDG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146F81B0)
#define HFFIKHIMLDG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146F81F0)

inline static constexpr unsigned int HFFIKHIMLDG___c_TypeDefinitionIndex = 74671;

class HFFIKHIMLDG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HFFIKHIMLDG___c_TypeDefinitionIndex)->GetStaticField(0x4E530);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*>>** StaticGet___9__2_1()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*>>**)Il2CppClass::FromTypeDefinitionIndex(HFFIKHIMLDG___c_TypeDefinitionIndex)->GetStaticField(0x4E538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFFIKHIMLDG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIKHIMLDG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NADOIJGEBDE(::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*> EIHELBHCLID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*> NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*>, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigAbilityTargetData*>))((::PBYTE)hIl2Cpp + HFFIKHIMLDG___C_NADOIJGEBDE_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
