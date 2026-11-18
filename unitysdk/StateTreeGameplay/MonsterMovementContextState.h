#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class GEIHCPAOKKK;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NLNIIPDCABP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET UNITYSDK_OFFSET(0x849860)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTOPMOVE_OFFSET UNITYSDK_OFFSET(0x849880)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHTICKMOVE_OFFSET UNITYSDK_OFFSET(0x849870)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0x8496F0)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTOPMOVE_OFFSET UNITYSDK_OFFSET(0x849790)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_UPDATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x8497E0)
#define STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6BE1F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MonsterMovementContextState_TypeDefinitionIndex = 53605;

	struct alignas(4) MonsterMovementContextState
	{
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_PathBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MonsterMovementContextState_TypeDefinitionIndex)->GetStaticField(0x51B70);
		}
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x10
		::StateTreeGameplay::ContextTrigger StopTrigger; // 0x11
		::System::Boolean StopAtTarget; // 0x12
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 TargetPosition; // 0x14
		::System::Boolean IsMoving; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE__CCTOR_OFFSET))();
		}

		::System::Boolean TriggerStartMove(::UnityEngine::Vector3 position, ::System::Boolean stopAtTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET))(this, position, stopAtTarget);
		}

		::System::Boolean TriggerStopMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_TRIGGERSTOPMOVE_OFFSET))(this);
		}

		::System::Void UpdateTargetPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_UPDATETARGETPOSITION_OFFSET))(this, position);
		}

		::System::Void FlushStartMove(::DIAEPBNFKBO* baseDataComponent, ::DKPJAEANAPO* steerComponent)
		{
			return ((::System::Void(*)(::PVOID, ::DIAEPBNFKBO*, ::DKPJAEANAPO*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET))(this, baseDataComponent, steerComponent);
		}

		::System::Void FlushTickMove(::DIAEPBNFKBO* baseDataComponent, ::GEIHCPAOKKK* modelComponent, ::JOOHBDMHGCA* movementComponent, ::DKPJAEANAPO* steerComponent, ::NLNIIPDCABP* animatorComponent, ::LACHKEHCGNO* navmeshComponent, ::ACNLKLCDALA* inputComponent)
		{
			return ((::System::Void(*)(::PVOID, ::DIAEPBNFKBO*, ::GEIHCPAOKKK*, ::JOOHBDMHGCA*, ::DKPJAEANAPO*, ::NLNIIPDCABP*, ::LACHKEHCGNO*, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHTICKMOVE_OFFSET))(this, baseDataComponent, modelComponent, movementComponent, steerComponent, animatorComponent, navmeshComponent, inputComponent);
		}

		::System::Void FlushStopMove(::GEIHCPAOKKK* modelComponent, ::ACNLKLCDALA* inputComponent)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MONSTERMOVEMENTCONTEXTSTATE_FLUSHSTOPMOVE_OFFSET))(this, modelComponent, inputComponent);
		}
	};
}
