#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityAnyHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYANYHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A4000)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4A3F10)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4A3E70)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4A3F60)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE4A3EC0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4A3E20)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4A3FB0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GET_MODIFYSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xE4A3FE0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4A3D50)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4A3FD0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_SET_MODIFYSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xE4A3FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityAnyHPChange_TypeDefinitionIndex = 56569;

	class AbilityAnyHPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _ModifySourceEntity_k__BackingField; // 0x128
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::UInt32 _EntityRuntimeID; // 0x138
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x140
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityAnyHPChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::AbilityAnyHPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetOriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETORIGINMODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNegativeHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_ModifySourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GET_MODIFYSOURCEENTITY_OFFSET))(this);
		}

		::System::Void set_ModifySourceEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_SET_MODIFYSOURCEENTITY_OFFSET))(this, a1);
		}

	};
}
