#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMatchThreeBirdLocation; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BCDB0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BCFD0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BCFA0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BCDC0)
#define RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BCD80)

namespace RPG::GameCore
{
	class ByCompareMatchThreeBirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMATCHTHREEBIRDLOCATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
