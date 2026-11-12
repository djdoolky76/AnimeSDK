#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSEQOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE09510)
#define RPG_GAMECORE_TARGETSEQOPERATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE1D9F0)
#define RPG_GAMECORE_TARGETSEQOPERATION_ICOKOCPAMND_OFFSET UNITYSDK_OFFSET(0x1EE1D990)
#define RPG_GAMECORE_TARGETSEQOPERATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE1DA00)
#define RPG_GAMECORE_TARGETSEQOPERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE1D930)
#define RPG_GAMECORE_TARGETSEQOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE1D8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSeqOperation_TypeDefinitionIndex = 24198;

	class TargetSeqOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void ICOKOCPAMND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_ICOKOCPAMND_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
