#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightWaveInfo; }

#define RPG_GAMECORE_GRIDFIGHTWAVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D749FC0)
#define RPG_GAMECORE_GRIDFIGHTWAVEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D749EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveInfo_TypeDefinitionIndex = 18165;

	class GridFightWaveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 WaveIndex; // 0x10
		::System::UInt32 StageId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
