#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class OIIPJFDNPAH;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCGPDGJLMGC_LGKGDLPFNCF_OFFSET UNITYSDK_OFFSET(0xC738390)
#define CCGPDGJLMGC_NNMMBCDGKHL_OFFSET UNITYSDK_OFFSET(0xC7391D0)
#define CCGPDGJLMGC_PAAEJIIFCNG_OFFSET UNITYSDK_OFFSET(0xC7383E0)

inline static constexpr unsigned int CCGPDGJLMGC_TypeDefinitionIndex = 68168;

	class CCGPDGJLMGC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* LGKGDLPFNCF(::OIIPJFDNPAH* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::OIIPJFDNPAH*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CCGPDGJLMGC_LGKGDLPFNCF_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* NNMMBCDGKHL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + CCGPDGJLMGC_NNMMBCDGKHL_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* PAAEJIIFCNG(::OIIPJFDNPAH* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::OIIPJFDNPAH*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CCGPDGJLMGC_PAAEJIIFCNG_OFFSET))(a1, a2);
		}

	};
