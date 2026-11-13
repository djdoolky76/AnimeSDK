#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHEIHIKCFLA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define JHEIHIKCFLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19367FA0)
#define JHEIHIKCFLA_CGHKPMPEABF_OFFSET UNITYSDK_OFFSET(0x19367F30)
#define JHEIHIKCFLA_CTOR_OFFSET UNITYSDK_OFFSET(0x19368020)
#define JHEIHIKCFLA_KLFFJLJEDJG_1_OFFSET UNITYSDK_OFFSET(0x19368270)
#define JHEIHIKCFLA_KLFFJLJEDJG_OFFSET UNITYSDK_OFFSET(0x19368030)

inline static constexpr unsigned int JHEIHIKCFLA_TypeDefinitionIndex = 68841;

	class JHEIHIKCFLA : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEIHIKCFLA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRelicRecommendRow* CGHKPMPEABF()
		{
			return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEIHIKCFLA_CGHKPMPEABF_OFFSET))(this);
		}

		static ::JHEIHIKCFLA* BPLPBPMEODA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::JHEIHIKCFLA*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + JHEIHIKCFLA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 KLFFJLJEDJG(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + JHEIHIKCFLA_KLFFJLJEDJG_OFFSET))(this, a1);
		}

		::System::Void KLFFJLJEDJG_1(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + JHEIHIKCFLA_KLFFJLJEDJG_1_OFFSET))(this, a1);
		}

	};
