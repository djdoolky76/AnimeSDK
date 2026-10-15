#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CMJBLLIHDKP;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJEGELMOMIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB448AD0)
#define KJEGELMOMIA_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB448630)
#define KJEGELMOMIA_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0xB448620)
#define KJEGELMOMIA_IHCFFNABEMK_OFFSET UNITYSDK_OFFSET(0xB448890)
#define KJEGELMOMIA_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB4486E0)
#define KJEGELMOMIA_NMCEFGCGHFG_OFFSET UNITYSDK_OFFSET(0xB448770)

inline static constexpr unsigned int KJEGELMOMIA_TypeDefinitionIndex = 53764;

	class KJEGELMOMIA : public ::GJPFGOGOLBI
	{
	public:
		::CMJBLLIHDKP* FIGPNKAHDHL; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple>* LDNHOKKHOCO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEGELMOMIA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEGELMOMIA_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEGELMOMIA_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEGELMOMIA_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void IHCFFNABEMK(::RPG::GameCore::RtAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJEGELMOMIA_IHCFFNABEMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NMCEFGCGHFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEGELMOMIA_NMCEFGCGHFG_OFFSET))(this);
		}

	};
