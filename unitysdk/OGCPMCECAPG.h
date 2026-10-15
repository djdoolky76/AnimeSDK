#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OGCPMCECAPG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define OGCPMCECAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D240FC0)
#define OGCPMCECAPG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D241240)
#define OGCPMCECAPG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D241210)
#define OGCPMCECAPG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D240FD0)
#define OGCPMCECAPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D240F90)

inline static constexpr unsigned int OGCPMCECAPG_TypeDefinitionIndex = 22859;

	class OGCPMCECAPG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ECHFEMAFJNN; // 0x20
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x28
		::RPG::GameCore::OrbitAreaState NCLIOKFBKHD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCPMCECAPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + OGCPMCECAPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + OGCPMCECAPG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + OGCPMCECAPG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + OGCPMCECAPG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
