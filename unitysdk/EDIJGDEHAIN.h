#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBILAKDENF.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class BattleVersusClickQTEConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TaskContext; }

#define EDIJGDEHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x13319D20)
#define EDIJGDEHAIN_EGHECGPBNPI_OFFSET UNITYSDK_OFFSET(0x13319E80)

inline static constexpr unsigned int EDIJGDEHAIN_TypeDefinitionIndex = 56194;

	class EDIJGDEHAIN : public ::GIBILAKDENF
	{
	public:
		::ENEIHJJPNPI* GHDIMNMDKBN; // 0x48
		::RPG::GameCore::FloatCurve* BPELOLLILDK; // 0x50
		::RPG::GameCore::FloatCurve* OOOAEGPJECD; // 0x58
		::RPG::GameCore::FloatCurve* FOOACKFOING; // 0x60
		::RPG::GameCore::StringHash CJDMFDGGAND; // 0x68
		::System::Single EFJAHDEMACL; // 0x6C
		::System::Single OCKLDNKHHHG; // 0x70
		::System::Single DDOGPCKGEAI; // 0x74
		::System::Single MPHNBEOHEHK; // 0x78
		::System::Void _ctor(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EDIJGDEHAIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EGHECGPBNPI(::RPG::GameCore::BattleVersusClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleVersusClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EDIJGDEHAIN_EGHECGPBNPI_OFFSET))(this, a1, a2);
		}

	};
