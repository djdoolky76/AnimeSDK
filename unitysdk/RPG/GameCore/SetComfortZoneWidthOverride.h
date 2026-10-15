#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetComfortZoneWidthOverride; }

#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9CD20)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9CD30)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9CCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComfortZoneWidthOverride_TypeDefinitionIndex = 22982;

	class SetComfortZoneWidthOverride : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
