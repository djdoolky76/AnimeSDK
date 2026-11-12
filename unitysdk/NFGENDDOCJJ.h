#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffect; }

#define NFGENDDOCJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC468AC0)
#define NFGENDDOCJJ_DIHGBKDKJJG_OFFSET UNITYSDK_OFFSET(0xC46B430)
#define NFGENDDOCJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC468B70)
#define NFGENDDOCJJ_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0xC46B740)
#define NFGENDDOCJJ_ENCLMJNNIEK_OFFSET UNITYSDK_OFFSET(0xC46AF30)
#define NFGENDDOCJJ_GEOAKBLMIEG_OFFSET UNITYSDK_OFFSET(0xC46BCC0)
#define NFGENDDOCJJ_KAOOJGPODGJ_OFFSET UNITYSDK_OFFSET(0xC46B3A0)
#define NFGENDDOCJJ_LBMACDLKEDF_OFFSET UNITYSDK_OFFSET(0xC46B8F0)
#define NFGENDDOCJJ_LDNKDOCFCHL_OFFSET UNITYSDK_OFFSET(0xC46B7B0)
#define NFGENDDOCJJ_MOFECBLLNOI_OFFSET UNITYSDK_OFFSET(0xC46AEA0)
#define NFGENDDOCJJ_NDBOOAEKNMC_OFFSET UNITYSDK_OFFSET(0xC46BD10)
#define NFGENDDOCJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC468BB0)
#define NFGENDDOCJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC46B690)
#define NFGENDDOCJJ_TICK_OFFSET UNITYSDK_OFFSET(0xC46B6E0)

inline static constexpr unsigned int NFGENDDOCJJ_TypeDefinitionIndex = 56934;

	class NFGENDDOCJJ : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TriggerEffect* OFKGLJOAMLD; // 0x28
		::System::Boolean MAJKBGHNOBL; // 0x30
		::System::Boolean LEIGKHEMCGE; // 0x31
		::System::Byte _padding0[0x2];
		::RPG::GameCore::StringHash PPKJNOJIJMH; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TargetEvaluator* MOFECBLLNOI()
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_MOFECBLLNOI_OFFSET))(this);
		}

		::System::Boolean ENCLMJNNIEK(::RPG::GameCore::TargetAlias* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TargetAlias*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_ENCLMJNNIEK_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_TICK_OFFSET))(this, a1);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_EDNJAFJEPJF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KAOOJGPODGJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_KAOOJGPODGJ_OFFSET))(this);
		}

		::System::Void LDNKDOCFCHL(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_LDNKDOCFCHL_OFFSET))(this, a1);
		}

		::System::Void LBMACDLKEDF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_LBMACDLKEDF_OFFSET))(this, a1, a2);
		}

		::System::Void GEOAKBLMIEG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_GEOAKBLMIEG_OFFSET))(this, a1);
		}

		::System::Boolean NDBOOAEKNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_NDBOOAEKNMC_OFFSET))(this);
		}

		::System::Boolean DIHGBKDKJJG(::RPG::GameCore::TargetEvaluator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + NFGENDDOCJJ_DIHGBKDKJJG_OFFSET))(this, a1);
		}

	};
