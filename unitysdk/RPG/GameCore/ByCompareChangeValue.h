#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareChangeValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49F4E0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49F740)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49F710)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49F4F0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49F4B0)

namespace RPG::GameCore
{
	class ByCompareChangeValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ChangeValueIndex; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
