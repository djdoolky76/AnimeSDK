#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHLGGCHBGJK.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class CharacterInputData; }

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0x1AE80280)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0x1AE80070)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE7FF70)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0x1AE802D0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE804A0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE80480)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1AE80000)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AE801A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 58232;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Boolean MovingSteerOnly; // 0x10
		::System::Boolean TriggerSkill; // 0x11
		::System::Boolean IsInTurnBack; // 0x12
		::System::Boolean CacheAttack; // 0x13
		::System::Single DesiredMoveMag; // 0x14
		::System::Nullable_1<::OHLGGCHBGJK> NavigationFinishedConstraint; // 0x18
		::System::Byte _padding0[0x10];
		::System::Single MoveTime; // 0x30
		::System::Single DesireDirectionAngle; // 0x34
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x38
		::System::Single OverrideTurnSpeed; // 0x3C
		::UnityEngine::Vector3 DeltaPosition; // 0x40
		::System::Boolean TriggerAlert; // 0x4C
		::System::Boolean RushMoveFlag; // 0x4D
		::System::Boolean TriggerAttack; // 0x4E
		::System::Boolean NavigationToTarget; // 0x4F
		::RPG::MVector3 _desiredMoveVector; // 0x50
		::System::Boolean NavigationMoveCheck; // 0x5C
		::System::Boolean NavigationToTargetRestrict; // 0x5D
		::System::Boolean CacheSkill; // 0x5E
		::System::Byte _padding1[0x1];
		::RPG::MVector3 DesiredTarget; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET))(this);
		}

		::System::Void ClearSteer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET))(this, a1);
		}

		::System::Void ClearMoveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET))(this);
		}

		::System::Void Copy(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET))(this, a1);
		}

		::System::Void set_DesiredMoveVector(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_DesiredMoveVector()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET))(this);
		}

	};
}
