#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37460)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB374F0)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB374D0)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB37470)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB373F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPassiveEntity_TypeDefinitionIndex = 23914;

	class TargetFetchPassiveEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
