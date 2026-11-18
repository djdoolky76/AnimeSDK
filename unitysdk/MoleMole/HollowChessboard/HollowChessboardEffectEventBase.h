#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGMPOGGNJCB.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_GET_CUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1625A860)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_SET_CUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1625A870)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1625A880)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectEventBase_TypeDefinitionIndex = 67559;

	class HollowChessboardEffectEventBase : public ::System::Object
	{
	public:
		::GGMPOGGNJCB _CustomEvent_k__BackingField; // 0x10
		::System::Single DelayTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE__CTOR_OFFSET))(this);
		}

		::GGMPOGGNJCB get_CustomEvent()
		{
			return ((::GGMPOGGNJCB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_GET_CUSTOMEVENT_OFFSET))(this);
		}

		::System::Void set_CustomEvent(::GGMPOGGNJCB value)
		{
			return ((::System::Void(*)(::PVOID, ::GGMPOGGNJCB))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTEVENTBASE_SET_CUSTOMEVENT_OFFSET))(this, value);
		}
	};
}
