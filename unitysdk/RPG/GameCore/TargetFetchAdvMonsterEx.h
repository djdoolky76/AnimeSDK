#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvMonsterFetchType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5BA10)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5BD20)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5BCD0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5BA20)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5B9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonsterEx_TypeDefinitionIndex = 23888;

	class TargetFetchAdvMonsterEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvMonsterFetchType FetchType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* SingleMonsterKey; // 0x18
		::RPG::GameCore::FetchAdvMonsterData* SingleMonsterID; // 0x20
		::RPG::GameCore::DynamicFloat* SingleMonsterIDInOwnerGroup; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiMonsterKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiMonsterID; // 0x38
		::RPG::GameCore::DynamicFloat* MultiMonsterOwnerGroup; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
