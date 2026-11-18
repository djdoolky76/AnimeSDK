#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectEventBase.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTDESTROYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEE990)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEffectDestroyEvent_TypeDefinitionIndex = 72783;

	class HollowChessboardEffectDestroyEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDEFFECTDESTROYEVENT__CTOR_OFFSET))(this);
		}
	};
}
