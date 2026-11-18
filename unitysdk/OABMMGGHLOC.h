#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OABMMGGHLOC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xE0E0DB0)
#define OABMMGGHLOC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE0E1460)
#define OABMMGGHLOC_DANCMPJLIBB_OFFSET UNITYSDK_OFFSET(0xE0E0FA0)
#define OABMMGGHLOC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE0E1360)
#define OABMMGGHLOC_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0xE0E0F90)

inline static constexpr unsigned int OABMMGGHLOC_TypeDefinitionIndex = 50044;

class OABMMGGHLOC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSpecialEffectHitWall** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigSpecialEffectHitWall**)Il2CppClass::FromTypeDefinitionIndex(OABMMGGHLOC_TypeDefinitionIndex)->GetStaticField(0x495A0);
	}

	static ::MoleMole::Config::ConfigSpecialEffectHitWall* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigSpecialEffectHitWall*(*)())((::PBYTE)hIl2Cpp + OABMMGGHLOC_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigSpecialEffectHitWall* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + OABMMGGHLOC_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean DANCMPJLIBB(::System::String* PEGLCDCAHDC, ::MoleMole::Config::DamageDecalData& DMLDPLFNJGE)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::DamageDecalData&))((::PBYTE)hIl2Cpp + OABMMGGHLOC_DANCMPJLIBB_OFFSET))(PEGLCDCAHDC, DMLDPLFNJGE);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OABMMGGHLOC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OABMMGGHLOC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
