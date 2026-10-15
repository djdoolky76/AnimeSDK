#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBILAKDENF.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class BattleVersusClickQTEConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TaskContext; }

#define EDIJGDEHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1331EA00)
#define EDIJGDEHAIN_EGHECGPBNPI_OFFSET UNITYSDK_OFFSET(0x1331EB60)

	class EDIJGDEHAIN : public ::GIBILAKDENF
	{
	public:
		::RPG::GameCore::FloatCurve* BPELOLLILDK; // 0x48
		::RPG::GameCore::FloatCurve* FOOACKFOING; // 0x50
		::ENEIHJJPNPI* GHDIMNMDKBN; // 0x58
		::RPG::GameCore::FloatCurve* OOOAEGPJECD; // 0x60
		::System::Single MPHNBEOHEHK; // 0x68
		::RPG::GameCore::StringHash CJDMFDGGAND; // 0x6C
		::System::Single DDOGPCKGEAI; // 0x70
		::System::Single OCKLDNKHHHG; // 0x74
		::System::Single EFJAHDEMACL; // 0x78
		::System::Void _ctor(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EDIJGDEHAIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EGHECGPBNPI(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EDIJGDEHAIN_EGHECGPBNPI_OFFSET))(this, a1, a2);
		}

	};
