#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneCommonSkill; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FELOEPNOOCJ_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x116ABA80)
#define FELOEPNOOCJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x116AB790)
#define FELOEPNOOCJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x116AB6A0)
#define FELOEPNOOCJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x116AC280)
#define FELOEPNOOCJ_PAFMKNNCGJN_OFFSET UNITYSDK_OFFSET(0x116AB470)
#define FELOEPNOOCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116AB460)

inline static constexpr unsigned int FELOEPNOOCJ_TypeDefinitionIndex = 63571;

class FELOEPNOOCJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>** StaticGet_LCFPAICIMFB()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>**)Il2CppClass::FromTypeDefinitionIndex(FELOEPNOOCJ_TypeDefinitionIndex)->GetStaticField(0x408C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELOEPNOOCJ__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::IReadOnlyDictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>* PAFMKNNCGJN()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig>*(*)())((::PBYTE)hIl2Cpp + FELOEPNOOCJ_PAFMKNNCGJN_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneCommonSkill*>* AKAKKIGOCNO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneCommonSkill*>*))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_BBAECOMOFLL_OFFSET))(AKAKKIGOCNO);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FELOEPNOOCJ_NPOLNFDBOOD_OFFSET))();
	}
};
