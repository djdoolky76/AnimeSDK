#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
class KNKPLOGICFO;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D844AF0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1D843B20)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET UNITYSDK_OFFSET(0x1D844840)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET UNITYSDK_OFFSET(0x1D844880)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x1D843F40)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1D8445E0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D844910)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8446C0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D844320)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1D8442B0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8441F0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1D843CE0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET UNITYSDK_OFFSET(0x1D8444A0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET UNITYSDK_OFFSET(0x1D844420)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveController_TypeDefinitionIndex = 68416;

	class PlanetFesAvatarMoveController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MoveRangeDuration; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x20
		::UnityEngine::Transform* MoveRangeLeftPoint; // 0x28
		::UnityEngine::Transform* MoveRangeRightPoint; // 0x30
		::UnityEngine::Transform* MoveRangeOriginPoint; // 0x38
		::UnityEngine::Transform* AvatarRoot; // 0x40
		::UnityEngine::Vector3 _AvatarRootOriginPosition; // 0x48
		::UnityEngine::Vector3 _AvatarRootLeftPosition; // 0x54
		::UnityEngine::Vector3 _AvatarRootRightPosition; // 0x60
		::UnityEngine::Vector3 _TargetPosition; // 0x6C
		::System::Boolean _IsInMove; // 0x78
		::System::Byte _padding1[0x7];
		::KNKPLOGICFO* _MoveTimer; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void StartMove(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET))(this, a1);
		}

		::System::Void StopMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET))(this, a1);
		}

		::System::Boolean IsInMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET))(this);
		}

		::System::Boolean ShouldFaceRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET))(this);
		}

		::System::Void _StartTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET))(this, a1);
		}

		::System::Void _StopTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _CheckValid(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET))(this, a1);
		}

		::System::Void _ApplyPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET))(this, a1);
		}

		::System::Void _CalculateTargetPosition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetLocalPositionFromWorldPosition(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Single _GetCurNormalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET))(this);
		}

	};
}
