#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE09C40)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE09CD0)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE09CB0)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE09C50)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE09BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActualOwner_TypeDefinitionIndex = 24423;

	class TargetFetchActualOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
