#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJGDDDJLKFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714B830)

inline static constexpr unsigned int FJGDDDJLKFL_TypeDefinitionIndex = 61581;

class FJGDDDJLKFL : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask>** StaticGet_JLNEMOAHNNN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask>**)Il2CppClass::FromTypeDefinitionIndex(FJGDDDJLKFL_TypeDefinitionIndex)->GetStaticField(0x3B250);
	}
	static ::MoleMole::GameplayTag* StaticGet_EAMGOHLDBFM()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(FJGDDDJLKFL_TypeDefinitionIndex)->GetStaticField(0x3B258);
	}
	static ::MoleMole::GameplayTag* StaticGet_CKBGOEPLJKM()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(FJGDDDJLKFL_TypeDefinitionIndex)->GetStaticField(0x3B268);
	}
	static ::MoleMole::Ability::InLevelAbilityTargetMask* StaticGet_KMFFGBBFPOP()
	{
		return (::MoleMole::Ability::InLevelAbilityTargetMask*)Il2CppClass::FromTypeDefinitionIndex(FJGDDDJLKFL_TypeDefinitionIndex)->GetStaticField(0xD9A0);
	}
	// static const ::System::String* JGEGIDBHIOC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGDDDJLKFL__CCTOR_OFFSET))();
	}
};
