#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
class CIMOKFGNKCB;
class IBNAFGFFJLJ;
class JLJHFLEECLF;
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKLKAFJNBGJ_BBJPICAMMPK_OFFSET UNITYSDK_OFFSET(0xC2DD100)
#define PKLKAFJNBGJ_GMHGKPNMHDC_OFFSET UNITYSDK_OFFSET(0xC2DCB10)
#define PKLKAFJNBGJ_LADIJJAJMFO_OFFSET UNITYSDK_OFFSET(0xC2DD260)
#define PKLKAFJNBGJ_MJINHMDADME_OFFSET UNITYSDK_OFFSET(0xC2DD1B0)
#define PKLKAFJNBGJ_MOLDJEAMJIP_OFFSET UNITYSDK_OFFSET(0xC2DD050)
#define PKLKAFJNBGJ_OOALCJGALCP_OFFSET UNITYSDK_OFFSET(0xC2DC970)

inline static constexpr unsigned int PKLKAFJNBGJ_TypeDefinitionIndex = 74101;

	class PKLKAFJNBGJ : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityAlley::AlleyPackShipData* OOALCJGALCP(::System::UInt32 a1, ::RPG::Client::ActivityAlley::AlleyPackComponent* a2)
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackShipData*(*)(::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_OOALCJGALCP_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityAlley::AlleyPackGoodData* GMHGKPNMHDC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ActivityAlley::AlleyPackComponent* a3)
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_GMHGKPNMHDC_OFFSET))(a1, a2, a3);
		}

		static ::IBNAFGFFJLJ* MOLDJEAMJIP(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
		{
			return ((::IBNAFGFFJLJ*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_MOLDJEAMJIP_OFFSET))(a1, a2);
		}

		static ::JLJHFLEECLF* BBJPICAMMPK(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
		{
			return ((::JLJHFLEECLF*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_BBJPICAMMPK_OFFSET))(a1, a2, a3);
		}

		static ::CIMOKFGNKCB* MJINHMDADME(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
		{
			return ((::CIMOKFGNKCB*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_MJINHMDADME_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ActivityAlley::AlleyPackGroupData* LADIJJAJMFO(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* a1)
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*))((::PBYTE)hIl2Cpp + PKLKAFJNBGJ_LADIJJAJMFO_OFFSET))(a1);
		}

	};
