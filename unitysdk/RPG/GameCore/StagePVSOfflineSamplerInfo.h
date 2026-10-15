#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PVSOptSamplerType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineSamplerInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12030)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB12040)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11ED0)

namespace RPG::GameCore
{
	class StagePVSOfflineSamplerInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ID; // 0x10
		::RPG::MVector3 Position; // 0x14
		::RPG::GameCore::PVSOptSamplerType SamplerType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineSamplerInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineSamplerInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineSamplerInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineSamplerInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
