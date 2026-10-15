#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineLightInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB11EC0)
#define RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineLightInfo_TypeDefinitionIndex = 19185;

	class StagePVSOfflineLightInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int64 LightID; // 0x10
		::CNHKFCHOEHK matrix; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineLightInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineLightInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
