#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAidProtector; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5EFF0)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5F080)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5F060)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5F000)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5EF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidProtector_TypeDefinitionIndex = 24008;

	class TargetFetchAidProtector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
