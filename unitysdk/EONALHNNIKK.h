#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace MoleMole::Config { class HitEffectConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class TagConfigAnimatorBeHitPriority; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EONALHNNIKK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x14AB2DF0)
#define EONALHNNIKK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14AB2940)
#define EONALHNNIKK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14AB2850)
#define EONALHNNIKK_KPPGGCFCFMA_1_OFFSET UNITYSDK_OFFSET(0x14AB2B50)
#define EONALHNNIKK_KPPGGCFCFMA_OFFSET UNITYSDK_OFFSET(0x14AB25D0)

inline static constexpr unsigned int EONALHNNIKK_TypeDefinitionIndex = 83838;

class EONALHNNIKK : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>** StaticGet_KHBEGLALLDC()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(EONALHNNIKK_TypeDefinitionIndex)->GetStaticField(0x4CE10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TagConfigAnimatorBeHitPriority*>** StaticGet_PDLGKAEPHCL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TagConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(EONALHNNIKK_TypeDefinitionIndex)->GetStaticField(0x4CE18);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Config::HitEffectConfigAnimatorBeHitPriority*>** StaticGet_AHFJNCMDHLK()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::HitEffectConfigAnimatorBeHitPriority*>**)Il2CppClass::FromTypeDefinitionIndex(EONALHNNIKK_TypeDefinitionIndex)->GetStaticField(0x4CE20);
	}
	static ::MoleMole::Config::ConfigAnimatorBeHitPriorities** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigAnimatorBeHitPriorities**)Il2CppClass::FromTypeDefinitionIndex(EONALHNNIKK_TypeDefinitionIndex)->GetStaticField(0x4CE28);
	}
	// static const ::System::Int32 LHODKEJIFMD = 0x0; // 0x0

	static ::System::Int32 KPPGGCFCFMA(::MoleMole::Config::AnimatorBeHitTag AELLPLBJELA)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorBeHitTag))((::PBYTE)hIl2Cpp + EONALHNNIKK_KPPGGCFCFMA_OFFSET))(AELLPLBJELA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EONALHNNIKK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EONALHNNIKK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Int32 KPPGGCFCFMA_1(::MoleMole::Config::AnimatorHitEffect OGIGOPHMJEP, ::System::Int32 LAIGJIOIELN)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorHitEffect, ::System::Int32))((::PBYTE)hIl2Cpp + EONALHNNIKK_KPPGGCFCFMA_1_OFFSET))(OGIGOPHMJEP, LAIGJIOIELN);
	}

	static ::MoleMole::Config::ConfigAnimatorBeHitPriorities* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigAnimatorBeHitPriorities*(*)())((::PBYTE)hIl2Cpp + EONALHNNIKK_COPIDBEMEIE_OFFSET))();
	}
};
