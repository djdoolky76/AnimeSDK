#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_LinearMap; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_LINEARMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5BD80)
#define RPG_GAMECORE_VP_LINEARMAP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC5BEE0)
#define RPG_GAMECORE_VP_LINEARMAP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5BEB0)
#define RPG_GAMECORE_VP_LINEARMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5BD90)
#define RPG_GAMECORE_VP_LINEARMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_LinearMap_TypeDefinitionIndex = 24059;

	class VP_LinearMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
