#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvFakeAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5ADB0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5AE40)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5AE20)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5ADC0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5AD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatar_TypeDefinitionIndex = 23880;

	class TargetFetchAdvFakeAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
