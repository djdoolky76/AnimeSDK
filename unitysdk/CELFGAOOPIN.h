#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNFLPMACOFA.h"
class JKLCLLAFHOC;
namespace RPG::Client { class ChessRogueBoardCellBossSelectData; }
namespace RPG::Client { class ChessRogueBoardCellDecayData; }

#define CELFGAOOPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x18820360)
#define CELFGAOOPIN_GET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x18820440)
#define CELFGAOOPIN_GET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x18820460)
#define CELFGAOOPIN_JPJECAOFHOP_OFFSET UNITYSDK_OFFSET(0x18820370)
#define CELFGAOOPIN_SET_BOSSSELECTDATA_OFFSET UNITYSDK_OFFSET(0x18820450)
#define CELFGAOOPIN_SET_DECAYDATA_OFFSET UNITYSDK_OFFSET(0x18820470)

inline static constexpr unsigned int CELFGAOOPIN_TypeDefinitionIndex = 68866;

	class CELFGAOOPIN : public ::GNFLPMACOFA
	{
	public:
		::RPG::Client::ChessRogueBoardCellDecayData* _DecayData_k__BackingField; // 0x10
		::RPG::Client::ChessRogueBoardCellBossSelectData* _BossSelectData_k__BackingField; // 0x18
		::System::Void _ctor(::JKLCLLAFHOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLCLLAFHOC*))((::PBYTE)hIl2Cpp + CELFGAOOPIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void JPJECAOFHOP(::JKLCLLAFHOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLCLLAFHOC*))((::PBYTE)hIl2Cpp + CELFGAOOPIN_JPJECAOFHOP_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellBossSelectData* get_BossSelectData()
		{
			return ((::RPG::Client::ChessRogueBoardCellBossSelectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFGAOOPIN_GET_BOSSSELECTDATA_OFFSET))(this);
		}

		::System::Void set_BossSelectData(::RPG::Client::ChessRogueBoardCellBossSelectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellBossSelectData*))((::PBYTE)hIl2Cpp + CELFGAOOPIN_SET_BOSSSELECTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellDecayData* get_DecayData()
		{
			return ((::RPG::Client::ChessRogueBoardCellDecayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFGAOOPIN_GET_DECAYDATA_OFFSET))(this);
		}

		::System::Void set_DecayData(::RPG::Client::ChessRogueBoardCellDecayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDecayData*))((::PBYTE)hIl2Cpp + CELFGAOOPIN_SET_DECAYDATA_OFFSET))(this, a1);
		}

	};
