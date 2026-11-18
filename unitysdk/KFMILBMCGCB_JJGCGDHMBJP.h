#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

#define KFMILBMCGCB_JJGCGDHMBJP_EDAKHIOKMHK_OFFSET UNITYSDK_OFFSET(0x17704420)
#define KFMILBMCGCB_JJGCGDHMBJP_ENJCIDMCICC_OFFSET UNITYSDK_OFFSET(0x17704720)
#define KFMILBMCGCB_JJGCGDHMBJP_OEADEGLIDMP_OFFSET UNITYSDK_OFFSET(0x17704120)
#define KFMILBMCGCB_JJGCGDHMBJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17703FB0)

inline static constexpr unsigned int KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex = 63618;

class KFMILBMCGCB_JJGCGDHMBJP : public ::System::Object
{
public:
	static ::MoleMole::GameplayTag* StaticGet_MIPALLOKMEE()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0x358F0);
	}
	static ::MoleMole::GameplayTag* StaticGet_NMPPCHFDFCP()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0x35900);
	}
	static ::MoleMole::GameplayTag* StaticGet_ELHCKPPNCPD()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0x35910);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_AELHGLDMLIF()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0xB540);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_PDJJPJJONCD()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0xB548);
	}
	static ::Foundation::Unreal::FGameplayTag* StaticGet_PFHPJEEICEF()
	{
		return (::Foundation::Unreal::FGameplayTag*)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_JJGCGDHMBJP_TypeDefinitionIndex)->GetStaticField(0xB550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB_JJGCGDHMBJP__CCTOR_OFFSET))();
	}

	static ::Foundation::Unreal::FGameplayTag OEADEGLIDMP()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB_JJGCGDHMBJP_OEADEGLIDMP_OFFSET))();
	}

	static ::Foundation::Unreal::FGameplayTag EDAKHIOKMHK()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB_JJGCGDHMBJP_EDAKHIOKMHK_OFFSET))();
	}

	static ::Foundation::Unreal::FGameplayTag ENJCIDMCICC()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB_JJGCGDHMBJP_ENJCIDMCICC_OFFSET))();
	}
};
