#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvFakeAvatarPlayerStub; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2D600)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2D6B0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB2D670)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2D610)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatarPlayerStub_TypeDefinitionIndex = 23879;

	class TargetFetchAdvFakeAvatarPlayerStub : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
