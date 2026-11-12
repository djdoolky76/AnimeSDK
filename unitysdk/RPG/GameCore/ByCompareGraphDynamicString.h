#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGraphDynamicString; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C2380)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6C2560)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6C2530)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6C2390)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6C2350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGraphDynamicString_TypeDefinitionIndex = 21050;

	class ByCompareGraphDynamicString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
