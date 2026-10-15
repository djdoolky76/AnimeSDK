#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }

#define RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76B4A0)
#define RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76B130)

namespace RPG::GameCore
{
	class HipplenGameAtmosphereConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* NpcIDs; // 0x18
		::Il2CppArray<::System::UInt32>* PropIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameAtmosphereConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameAtmosphereConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEATMOSPHERECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
