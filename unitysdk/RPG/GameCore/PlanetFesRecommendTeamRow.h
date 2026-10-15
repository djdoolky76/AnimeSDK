#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBDMAALKMGN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRecommendTeamRow; }

#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92AE20)
#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRecommendTeamRow_TypeDefinitionIndex = 12264;

	class PlanetFesRecommendTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::EBDMAALKMGN*>* Business; // 0x10
		::Il2CppArray<::EBDMAALKMGN*>* Exhibition; // 0x18
		::Il2CppArray<::EBDMAALKMGN*>* Game; // 0x20
		::System::UInt32 FesLevel; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesRecommendTeamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesRecommendTeamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
