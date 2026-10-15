#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62450)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62500)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB624C0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB62460)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB623C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFarmElementEntity_TypeDefinitionIndex = 23964;

	class TargetFetchFarmElementEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
