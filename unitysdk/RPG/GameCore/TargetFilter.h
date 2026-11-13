#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetFilter; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x206F13C0)
#define RPG_GAMECORE_TARGETFILTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F14A0)
#define RPG_GAMECORE_TARGETFILTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F1470)
#define RPG_GAMECORE_TARGETFILTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F13D0)
#define RPG_GAMECORE_TARGETFILTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F1310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilter_TypeDefinitionIndex = 24357;

	class TargetFilter : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
