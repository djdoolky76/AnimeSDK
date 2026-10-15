#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlanetFesPlaySpinAnim; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESPLAYSPINANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FB9D0)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FB9E0)
#define RPG_CLIENT_PLANETFESPLAYSPINANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FB9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPlaySpinAnim_TypeDefinitionIndex = 10279;

	class PlanetFesPlaySpinAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PlanetFesAnimTypeEnum AnimType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AnimName; // 0x20
		::System::Boolean WaitAnimFinish; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPLAYSPINANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
