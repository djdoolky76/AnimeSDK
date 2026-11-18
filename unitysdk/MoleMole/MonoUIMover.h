#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGJMCELLAKM.h"
#include "unitysdk/MIGGCGMOLIO.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A9366D0)
#define MOLEMOLE_MONOUIMOVER_MBCFJPBPCCN_OFFSET UNITYSDK_OFFSET(0x1A936850)
#define MOLEMOLE_MONOUIMOVER_MOVETO_OFFSET UNITYSDK_OFFSET(0x1A936AC0)
#define MOLEMOLE_MONOUIMOVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A9367A0)
#define MOLEMOLE_MONOUIMOVER_ONMOVEEND_OFFSET UNITYSDK_OFFSET(0x1A936B20)
#define MOLEMOLE_MONOUIMOVER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1A936BC0)
#define MOLEMOLE_MONOUIMOVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A9367F0)
#define MOLEMOLE_MONOUIMOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A936C10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMover_TypeDefinitionIndex = 64740;

	class MonoUIMover : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MIGGCGMOLIO moveType; // 0x18
		::System::Int32 speed; // 0x1C
		::IGJMCELLAKM FOMFEHLHOJP; // 0x20
		::UnityEngine::Vector2 OBHADCGHPBE; // 0x24
		::System::Byte _padding0[0x4];
		::System::Action* BFDIMMLACDB; // 0x30
		::UnityEngine::RectTransform* OBLEMFDIIOD; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_UPDATE_OFFSET))(this);
		}

		::System::Void MoveTo(::UnityEngine::Vector2 IACKHFCLPJI, ::System::Action* DOBFFIICAII)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_MOVETO_OFFSET))(this, IACKHFCLPJI, DOBFFIICAII);
		}

		::System::Void OnMoveEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_ONMOVEEND_OFFSET))(this);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_STOPMOVE_OFFSET))(this);
		}

		::System::Void MBCFJPBPCCN(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_MBCFJPBPCCN_OFFSET))(this, PBCAAADNEPK);
		}
	};
}
