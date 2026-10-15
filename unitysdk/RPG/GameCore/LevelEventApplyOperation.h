#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
namespace RPG::GameCore { class LevelEventApplyOperation; }

#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6EE5D0)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EE6C0)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EE670)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EE620)
#define RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET UNITYSDK_OFFSET(0xE6EE580)

namespace RPG::GameCore
{
	class LevelEventApplyOperation : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::OperationTypeMask OperationMask; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEventApplyOperation* Init(::RPG::GameCore::OperationTypeMask a1)
		{
			return ((::RPG::GameCore::LevelEventApplyOperation*(*)(::PVOID, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTAPPLYOPERATION_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
