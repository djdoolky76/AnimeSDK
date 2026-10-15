#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_ConstMap; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_CONSTMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88DD0)
#define RPG_GAMECORE_VP_CONSTMAP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC88F30)
#define RPG_GAMECORE_VP_CONSTMAP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC88F00)
#define RPG_GAMECORE_VP_CONSTMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC88DE0)
#define RPG_GAMECORE_VP_CONSTMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC88DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_ConstMap_TypeDefinitionIndex = 24058;

	class VP_ConstMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
