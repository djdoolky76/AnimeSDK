#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPhotoGraphConditionSuccess; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D530100)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D530300)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5302D0)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D530110)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5300D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphConditionSuccess_TypeDefinitionIndex = 21634;

	class ByPhotoGraphConditionSuccess : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PhotoGraphName; // 0x20
		::System::String* CustomEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
