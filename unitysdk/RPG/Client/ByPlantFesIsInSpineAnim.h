#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByPlantFesIsInSpineAnim; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F1820)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2F19F0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2F19C0)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F1830)
#define RPG_CLIENT_BYPLANTFESISINSPINEANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F17F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByPlantFesIsInSpineAnim_TypeDefinitionIndex = 10278;

	class ByPlantFesIsInSpineAnim : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimNameList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYPLANTFESISINSPINEANIM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
