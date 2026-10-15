#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFilterVolumeEnable; }

#define RPG_GAMECORE_SETFILTERVOLUMEENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2450)
#define RPG_GAMECORE_SETFILTERVOLUMEENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2460)
#define RPG_GAMECORE_SETFILTERVOLUMEENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB2420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFilterVolumeEnable_TypeDefinitionIndex = 22254;

	class SetFilterVolumeEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TargetFilterVolume; // 0x18
		::System::Boolean IsEnable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFilterVolumeEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFilterVolumeEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFilterVolumeEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFilterVolumeEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
