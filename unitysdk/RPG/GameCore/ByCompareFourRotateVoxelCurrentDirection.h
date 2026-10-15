#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B0430)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B0600)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B05D0)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B0440)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B0400)

namespace RPG::GameCore
{
	class ByCompareFourRotateVoxelCurrentDirection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 Direction; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
