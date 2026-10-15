#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDMLLEGNNN;
class ENAEEMJLELJ;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }

#define ENAEEMJLELJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155A6E80)
#define ENAEEMJLELJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155A6F50)
#define ENAEEMJLELJ_GET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x155A6E60)
#define ENAEEMJLELJ_GET_BOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x155A6DE0)
#define ENAEEMJLELJ_GET_NORMALCHALLENGE_OFFSET UNITYSDK_OFFSET(0x155A6DD0)
#define ENAEEMJLELJ_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x155A6F60)
#define ENAEEMJLELJ_PIHENOALKNI_OFFSET UNITYSDK_OFFSET(0x155A6DF0)
#define ENAEEMJLELJ_SET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x155A6E70)

inline static constexpr unsigned int ENAEEMJLELJ_TypeDefinitionIndex = 63175;

	class ENAEEMJLELJ : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* _NormalChallenge_k__BackingField; // 0x10
		::RPG::Client::ChallengePeakBoss* _BossChallenge_k__BackingField; // 0x18
		::System::UInt32 _BossBuffID_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeakBoss* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeak* get_NormalChallenge()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_GET_NORMALCHALLENGE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBoss* get_BossChallenge()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_GET_BOSSCHALLENGE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* PIHENOALKNI()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_PIHENOALKNI_OFFSET))(this);
		}

		::System::UInt32 get_BossBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_GET_BOSSBUFFID_OFFSET))(this);
		}

		::System::Void set_BossBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_SET_BOSSBUFFID_OFFSET))(this, a1);
		}

		static ::ENAEEMJLELJ* BPLPBPMEODA(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeakBoss* a2, ::CIDMLLEGNNN* a3)
		{
			return ((::ENAEEMJLELJ*(*)(::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeakBoss*, ::CIDMLLEGNNN*))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::BaseGameFlow* NPIIEBDOBAE()
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEEMJLELJ_NPIIEBDOBAE_OFFSET))(this);
		}

	};
