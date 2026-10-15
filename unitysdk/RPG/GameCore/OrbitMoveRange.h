#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OrbitMoveRange; }
namespace System { class String; }

#define RPG_GAMECORE_ORBITMOVERANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6900)
#define RPG_GAMECORE_ORBITMOVERANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E66C0)

namespace RPG::GameCore
{
	class OrbitMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x10
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x18
		::RPG::GameCore::DynamicFloat* TransferPercentage; // 0x20
		::System::String* SpeedCurve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORBITMOVERANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OrbitMoveRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OrbitMoveRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ORBITMOVERANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
