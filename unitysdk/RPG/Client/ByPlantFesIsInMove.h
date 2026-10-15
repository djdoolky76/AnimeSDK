#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByPlantFesIsInMove; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYPLANTFESISINMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31EE30)
#define RPG_CLIENT_BYPLANTFESISINMOVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D31EFB0)
#define RPG_CLIENT_BYPLANTFESISINMOVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D31EF80)
#define RPG_CLIENT_BYPLANTFESISINMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31EE40)
#define RPG_CLIENT_BYPLANTFESISINMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31EE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInMove_TypeDefinitionIndex = 10283;

	class ByPlantFesIsInMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINMOVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
