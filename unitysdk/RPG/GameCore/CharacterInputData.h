#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHLGGCHBGJK.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class CharacterInputData; }

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xF05D8E0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0xF05D6D0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xF05D5D0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0xF05D930)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF05DB00)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xF05DAE0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xF05D660)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xF05D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 58232;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Boolean CacheSkill; // 0x10
		::System::Boolean TriggerAttack; // 0x11
		::System::Boolean IsInTurnBack; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single MoveTime; // 0x14
		::UnityEngine::Vector3 DeltaPosition; // 0x18
		::RPG::MVector3 _desiredMoveVector; // 0x24
		::System::Boolean MovingSteerOnly; // 0x30
		::System::Boolean TriggerSkill; // 0x31
		::System::Boolean NavigationToTargetRestrict; // 0x32
		::System::Boolean TriggerAlert; // 0x33
		::System::Single DesiredMoveMag; // 0x34
		::RPG::MVector3 DesiredTarget; // 0x38
		::System::Boolean NavigationMoveCheck; // 0x44
		::System::Boolean CacheAttack; // 0x45
		::System::Boolean RushMoveFlag; // 0x46
		::System::Boolean NavigationToTarget; // 0x47
		::System::Nullable_1<::OHLGGCHBGJK> NavigationFinishedConstraint; // 0x48
		::System::Byte _padding1[0x10];
		::System::Single OverrideTurnSpeed; // 0x60
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x64
		::System::Single DesireDirectionAngle; // 0x68
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
