#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCNCBIFHDEA_BIFPIPLMCFF_OFFSET UNITYSDK_OFFSET(0x169C6EB0)
#define FCNCBIFHDEA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x169C6F20)
#define FCNCBIFHDEA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x169C71D0)
#define FCNCBIFHDEA_NFLFFKJNKAA_OFFSET UNITYSDK_OFFSET(0x169C6690)
#define FCNCBIFHDEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x169C65F0)

inline static constexpr unsigned int FCNCBIFHDEA_TypeDefinitionIndex = 90389;

class FCNCBIFHDEA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSpecialEffectHitData** StaticGet_PKGCOPALEFD()
	{
		return (::MoleMole::Config::ConfigSpecialEffectHitData**)Il2CppClass::FromTypeDefinitionIndex(FCNCBIFHDEA_TypeDefinitionIndex)->GetStaticField(0x47F00);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_HEIMFKBMPEG()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(FCNCBIFHDEA_TypeDefinitionIndex)->GetStaticField(0x47F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCNCBIFHDEA__CCTOR_OFFSET))();
	}

	static ::System::Boolean NFLFFKJNKAA(::MoleMole::Config::AnimatorBeHitTag AELLPLBJELA, ::MoleMole::Config::CharacterAnimatorStateType EBFAHNFHDJG, ::MoleMole::Config::AnimatorHitEffect& AADMNLBGGMI, ::MoleMole::Config::AnimatorGroundHitType& FOAAPLIHJGF, ::MoleMole::Config::AnimatorAirHitType& OLKFNFILGAM)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::Config::CharacterAnimatorStateType, ::MoleMole::Config::AnimatorHitEffect&, ::MoleMole::Config::AnimatorGroundHitType&, ::MoleMole::Config::AnimatorAirHitType&))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_NFLFFKJNKAA_OFFSET))(AELLPLBJELA, EBFAHNFHDJG, AADMNLBGGMI, FOAAPLIHJGF, OLKFNFILGAM);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Int32 BIFPIPLMCFF(::MoleMole::Config::AnimatorHitEffect AADMNLBGGMI, ::MoleMole::Config::AnimatorGroundHitType FOAAPLIHJGF, ::MoleMole::Config::AnimatorAirHitType OLKFNFILGAM)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorHitEffect, ::MoleMole::Config::AnimatorGroundHitType, ::MoleMole::Config::AnimatorAirHitType))((::PBYTE)hIl2Cpp + FCNCBIFHDEA_BIFPIPLMCFF_OFFSET))(AADMNLBGGMI, FOAAPLIHJGF, OLKFNFILGAM);
	}
};
