#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PenaconyEndmostSimpleTalkData; }

#define RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F51C0)
#define RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F5040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PenaconyEndmostSimpleTalkData_TypeDefinitionIndex = 21825;

	class PenaconyEndmostSimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x10
		::System::Single BlockTime; // 0x14
		::System::Single Speed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PenaconyEndmostSimpleTalkData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PenaconyEndmostSimpleTalkData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
