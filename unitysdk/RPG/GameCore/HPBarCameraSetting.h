#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HPBarCameraSetting; }

#define RPG_GAMECORE_HPBARCAMERASETTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA73010)
#define RPG_GAMECORE_HPBARCAMERASETTING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA72E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPBarCameraSetting_TypeDefinitionIndex = 17323;

	class HPBarCameraSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OffsetYFar; // 0x10
		::System::Single OffsetYNear; // 0x14
		::System::Single DistanceMax; // 0x18
		::System::Single DistanceMin; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPBARCAMERASETTING_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HPBarCameraSetting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HPBarCameraSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPBARCAMERASETTING_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
