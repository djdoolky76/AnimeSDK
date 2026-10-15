#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_TargetPointType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByDistanceToTarget; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA74EC0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA751B0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA75180)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA74ED0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA74E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistanceToTarget_TypeDefinitionIndex = 20079;

	class ST_ByDistanceToTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_TargetPointType TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::Boolean UseVariable; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* VariableName; // 0x30
		::System::Single CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
