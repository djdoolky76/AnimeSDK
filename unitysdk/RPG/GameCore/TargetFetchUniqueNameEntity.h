#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB66A70)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB66B50)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB66B20)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB66A80)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB669C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUniqueNameEntity_TypeDefinitionIndex = 23932;

	class TargetFetchUniqueNameEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
