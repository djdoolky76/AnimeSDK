#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByCompareMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF2E0)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E7BF500)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E7BF4D0)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7BF2F0)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7BF2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCompareMatchThreeV2BirdLocation_TypeDefinitionIndex = 10268;

	class ByCompareMatchThreeV2BirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
