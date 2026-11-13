#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatConfig; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define AHEFOIFDDMH_KOMEPKKPNKM_1_OFFSET UNITYSDK_OFFSET(0x19B1E020)
#define AHEFOIFDDMH_KOMEPKKPNKM_2_OFFSET UNITYSDK_OFFSET(0x19B1E0D0)
#define AHEFOIFDDMH_KOMEPKKPNKM_3_OFFSET UNITYSDK_OFFSET(0x19B1E140)
#define AHEFOIFDDMH_KOMEPKKPNKM_OFFSET UNITYSDK_OFFSET(0x19B1DF40)
#define AHEFOIFDDMH_MHOHBOBIHPJ_OFFSET UNITYSDK_OFFSET(0x19B1DCB0)

inline static constexpr unsigned int AHEFOIFDDMH_TypeDefinitionIndex = 76428;

	class AHEFOIFDDMH : public ::System::Object
	{
	public:
		static ::System::Void MHOHBOBIHPJ(::RPG::GameCore::TrainPartyActionConfigBase* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionConfigBase*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + AHEFOIFDDMH_MHOHBOBIHPJ_OFFSET))(a1, a2);
		}

		static ::System::Void KOMEPKKPNKM(::RPG::GameCore::TrainPartyActionAddStatConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + AHEFOIFDDMH_KOMEPKKPNKM_OFFSET))(a1, a2);
		}

		static ::System::Void KOMEPKKPNKM_1(::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + AHEFOIFDDMH_KOMEPKKPNKM_1_OFFSET))(a1, a2);
		}

		static ::System::Void KOMEPKKPNKM_2(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + AHEFOIFDDMH_KOMEPKKPNKM_2_OFFSET))(a1, a2);
		}

		static ::System::Void KOMEPKKPNKM_3(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + AHEFOIFDDMH_KOMEPKKPNKM_3_OFFSET))(a1, a2);
		}

	};
