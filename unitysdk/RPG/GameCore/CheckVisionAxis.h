#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckVisionAxis; }

#define RPG_GAMECORE_CHECKVISIONAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54FC50)
#define RPG_GAMECORE_CHECKVISIONAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54FC60)
#define RPG_GAMECORE_CHECKVISIONAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54FC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckVisionAxis_TypeDefinitionIndex = 15514;

	class CheckVisionAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::EntityType TargetType; // 0x10
		::System::Single VisionDistance; // 0x14
		::System::Single VisionAngle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckVisionAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckVisionAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckVisionAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckVisionAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
