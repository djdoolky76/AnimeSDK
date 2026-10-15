#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LimaoNewsLimaoIconOptionTalkInfo; }

#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3202E0)
#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D320320)
#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D320280)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsLimaoIconOptionTalkInfo_TypeDefinitionIndex = 10244;

	class LimaoNewsLimaoIconOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::Il2CppArray<::System::UInt32>* UserIDList; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
