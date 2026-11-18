#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x130E0080)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowTipItem_TypeDefinitionIndex = 88767;

	class HollowTipItem : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Single waitTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPITEM__CTOR_OFFSET))(this);
		}
	};
}
