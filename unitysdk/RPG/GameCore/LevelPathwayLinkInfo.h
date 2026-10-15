#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPathwayLinkInfo; }

#define RPG_GAMECORE_LEVELPATHWAYLINKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7959B0)
#define RPG_GAMECORE_LEVELPATHWAYLINKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7958C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPathwayLinkInfo_TypeDefinitionIndex = 17251;

	class LevelPathwayLinkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* To; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYLINKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPathwayLinkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPathwayLinkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYLINKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
