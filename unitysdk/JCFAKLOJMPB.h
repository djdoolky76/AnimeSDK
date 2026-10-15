#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class BAPEECBHOID;
class CIIKBJFOKHL;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define JCFAKLOJMPB_AOKLOOEJCNH_OFFSET UNITYSDK_OFFSET(0x1657A100)
#define JCFAKLOJMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x16579B10)
#define JCFAKLOJMPB_DNBCIEGGMCN_OFFSET UNITYSDK_OFFSET(0x16579E30)
#define JCFAKLOJMPB_HJFFNDJOMLE_OFFSET UNITYSDK_OFFSET(0x16579C30)
#define JCFAKLOJMPB_KMHAIBDHFJG_OFFSET UNITYSDK_OFFSET(0x16579F60)
#define JCFAKLOJMPB_LKJIEHCODCI_OFFSET UNITYSDK_OFFSET(0x16579B20)

inline static constexpr unsigned int JCFAKLOJMPB_TypeDefinitionIndex = 77821;

	class JCFAKLOJMPB : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* FKINCGODJEP; // 0x10
		::LMFOOOLDECA* ADJNOFMEIKM; // 0x18
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LKJIEHCODCI(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleTriggerCallback* a2, ::CIIKBJFOKHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleTriggerCallback*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_LKJIEHCODCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HJFFNDJOMLE(::ALMFLCJCHKP* a1, ::BAPEECBHOID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::BAPEECBHOID*))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_HJFFNDJOMLE_OFFSET))(this, a1, a2);
		}

		::System::Void DNBCIEGGMCN(::ALMFLCJCHKP* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_DNBCIEGGMCN_OFFSET))(this, a1, a2);
		}

		::System::Void KMHAIBDHFJG(::ALMFLCJCHKP* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType, ::System::Int32))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_KMHAIBDHFJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AOKLOOEJCNH(::ALMFLCJCHKP* a1, ::BAPEECBHOID* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::BAPEECBHOID*, ::System::Int32))((::PBYTE)hIl2Cpp + JCFAKLOJMPB_AOKLOOEJCNH_OFFSET))(this, a1, a2, a3);
		}

	};
