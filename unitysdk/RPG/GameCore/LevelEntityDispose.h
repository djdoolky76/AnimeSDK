#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityDispose; }

#define RPG_GAMECORE_LEVELENTITYDISPOSE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA90FA0)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA91010)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA90F50)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA90F00)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FA90FF0)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_INIT_OFFSET UNITYSDK_OFFSET(0x1FA90EB0)
#define RPG_GAMECORE_LEVELENTITYDISPOSE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FA91000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityDispose_TypeDefinitionIndex = 57994;

	class LevelEntityDispose : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityDispose* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelEntityDispose*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Target()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYDISPOSE_SET_TARGET_OFFSET))(this, a1);
		}

	};
}
