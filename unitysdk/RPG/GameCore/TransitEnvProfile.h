#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define RPG_GAMECORE_TRANSITENVPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC389A0)
#define RPG_GAMECORE_TRANSITENVPROFILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC389B0)
#define RPG_GAMECORE_TRANSITENVPROFILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC387D0)

namespace RPG::GameCore
{
	class TransitEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Path; // 0x18
		::System::Single Duration; // 0x20
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
