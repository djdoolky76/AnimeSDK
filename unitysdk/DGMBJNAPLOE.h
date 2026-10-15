#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationRootMotionHandlerState.h"
#include "unitysdk/System/Object.h"
class FOOIINCDBFA;
namespace RPG::Client { class MovementStoppedRootMotionBakedData_OAKCINDCPAJ; }
namespace RPG::GameCore { class AdventureCharacterController; }

#define DGMBJNAPLOE_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xE853390)
#define DGMBJNAPLOE_AJDFGMDPGCJ_OFFSET UNITYSDK_OFFSET(0xE853310)
#define DGMBJNAPLOE_ANNLHIAFFCO_OFFSET UNITYSDK_OFFSET(0xE853990)
#define DGMBJNAPLOE_CJJBAFJGPCN_OFFSET UNITYSDK_OFFSET(0xE853080)
#define DGMBJNAPLOE_CTOR_OFFSET UNITYSDK_OFFSET(0xE853A40)
#define DGMBJNAPLOE_GALLFCIDCNI_OFFSET UNITYSDK_OFFSET(0xE8530A0)
#define DGMBJNAPLOE_GET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0xE853060)
#define DGMBJNAPLOE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE853040)
#define DGMBJNAPLOE_NMCPGPKHCOK_OFFSET UNITYSDK_OFFSET(0xE853250)
#define DGMBJNAPLOE_SET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0xE853070)
#define DGMBJNAPLOE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE853050)

	class DGMBJNAPLOE : public ::System::Object
	{
	public:
		::FOOIINCDBFA* DEMFJAMDLFP; // 0x10
		::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* EDAHOAGFFHN; // 0x18
		::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve FMPNNDANCKN; // 0x20
		::RPG::GameCore::AdventureCharacterController* JIIKAEMELPJ; // 0x38
		::RPG::GameCore::EAdventureNavigationRootMotionHandlerState _State_k__BackingField; // 0x40
		::System::Single FCJJOMFMKOC; // 0x44
		::System::Boolean NFDILONBJHJ; // 0x48
		::System::Boolean _AllowRotation_k__BackingField; // 0x49
		::System::Byte _padding0[0x2];
		::System::Single ADFCGIBHAIH; // 0x4C
		::System::Single PGMIOKKLHIE; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EAdventureNavigationRootMotionHandlerState get_State()
		{
			return ((::RPG::GameCore::EAdventureNavigationRootMotionHandlerState(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::EAdventureNavigationRootMotionHandlerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAdventureNavigationRootMotionHandlerState))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_GET_ALLOWROTATION_OFFSET))(this);
		}

		::System::Void set_AllowRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_SET_ALLOWROTATION_OFFSET))(this, a1);
		}

		::System::Single CJJBAFJGPCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_CJJBAFJGPCN_OFFSET))(this);
		}

		::System::Void GALLFCIDCNI(::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a1, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_GALLFCIDCNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AJDFGMDPGCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_AJDFGMDPGCJ_OFFSET))(this);
		}

		::System::Boolean AEGMLJMJBDO(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_AEGMLJMJBDO_OFFSET))(this, a1);
		}

		::System::Single NMCPGPKHCOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_NMCPGPKHCOK_OFFSET))(this);
		}

		::System::Single ANNLHIAFFCO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGMBJNAPLOE_ANNLHIAFFCO_OFFSET))(this, a1);
		}

	};
