#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
class CKNMJMCFPME;
class IAKMFLMFALK;
class KIIGKJKMCHP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONJFDPKFBA_BFAHPOGHLPL_OFFSET UNITYSDK_OFFSET(0xBA2FAC0)
#define MONJFDPKFBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2FDB0)
#define MONJFDPKFBA_DEONCKLKNLE_OFFSET UNITYSDK_OFFSET(0xBA2FCA0)
#define MONJFDPKFBA_GET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xBA2FA00)
#define MONJFDPKFBA_GET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0xBA2F9E0)
#define MONJFDPKFBA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA2F9C0)
#define MONJFDPKFBA_GET_DEVELOPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBA2FA80)
#define MONJFDPKFBA_GET_EQUIPPEDPAINT_OFFSET UNITYSDK_OFFSET(0xBA2FAA0)
#define MONJFDPKFBA_GET_EQUIPPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBA2FA60)
#define MONJFDPKFBA_GET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xBA2FA20)
#define MONJFDPKFBA_GET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xBA2FA40)
#define MONJFDPKFBA_IEOHOCDICCC_OFFSET UNITYSDK_OFFSET(0xBA2FBD0)
#define MONJFDPKFBA_SET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xBA2FA10)
#define MONJFDPKFBA_SET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0xBA2F9F0)
#define MONJFDPKFBA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA2F9D0)
#define MONJFDPKFBA_SET_DEVELOPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBA2FA90)
#define MONJFDPKFBA_SET_EQUIPPEDPAINT_OFFSET UNITYSDK_OFFSET(0xBA2FAB0)
#define MONJFDPKFBA_SET_EQUIPPEDPARTS_OFFSET UNITYSDK_OFFSET(0xBA2FA70)
#define MONJFDPKFBA_SET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xBA2FA30)
#define MONJFDPKFBA_SET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xBA2FA50)

inline static constexpr unsigned int MONJFDPKFBA_TypeDefinitionIndex = 81687;

	class MONJFDPKFBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>* _EquippedParts_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _TargetStatTiers_k__BackingField; // 0x18
		::CKNMJMCFPME* _EquippedPaint_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _StatValues_k__BackingField; // 0x28
		::IAKMFLMFALK* _Config_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>* _DevelopedParts_k__BackingField; // 0x38
		::System::UInt32 _ActiveSkillExp_k__BackingField; // 0x40
		::System::UInt32 _CarNumber_k__BackingField; // 0x44
		// static const ::System::Object GHJIDLDCHKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_CTOR_OFFSET))(this);
		}

		::IAKMFLMFALK* get_Config()
		{
			return ((::IAKMFLMFALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::IAKMFLMFALK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAKMFLMFALK*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_CarNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_CARNUMBER_OFFSET))(this);
		}

		::System::Void set_CarNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_CARNUMBER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveSkillExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_ACTIVESKILLEXP_OFFSET))(this);
		}

		::System::Void set_ActiveSkillExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_ACTIVESKILLEXP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_StatValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_STATVALUES_OFFSET))(this);
		}

		::System::Void set_StatValues(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_STATVALUES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_TargetStatTiers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_TARGETSTATTIERS_OFFSET))(this);
		}

		::System::Void set_TargetStatTiers(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_TARGETSTATTIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>* get_EquippedParts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_EQUIPPEDPARTS_OFFSET))(this);
		}

		::System::Void set_EquippedParts(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_EQUIPPEDPARTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>* get_DevelopedParts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_DEVELOPEDPARTS_OFFSET))(this);
		}

		::System::Void set_DevelopedParts(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_DEVELOPEDPARTS_OFFSET))(this, a1);
		}

		::CKNMJMCFPME* get_EquippedPaint()
		{
			return ((::CKNMJMCFPME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_GET_EQUIPPEDPAINT_OFFSET))(this);
		}

		::System::Void set_EquippedPaint(::CKNMJMCFPME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKNMJMCFPME*))((::PBYTE)hIl2Cpp + MONJFDPKFBA_SET_EQUIPPEDPAINT_OFFSET))(this, a1);
		}

		::System::Boolean BFAHPOGHLPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_BFAHPOGHLPL_OFFSET))(this);
		}

		::System::Boolean DEONCKLKNLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJFDPKFBA_DEONCKLKNLE_OFFSET))(this);
		}

		::System::Boolean IEOHOCDICCC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONJFDPKFBA_IEOHOCDICCC_OFFSET))(this, a1);
		}

	};
