#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareWaveCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE25A80)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE25D10)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE25CE0)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE25A90)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE25A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareWaveCount_TypeDefinitionIndex = 23880;

	class ByCompareWaveCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Boolean CompareWithMax; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
