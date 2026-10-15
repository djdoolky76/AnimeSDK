#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }

#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31FDF0)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31FE30)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31FD90)

namespace RPG::Client
{
	class LimaoNewsDutyCheckOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::UInt32 OptionID; // 0x68
		::System::Boolean IsOneTime; // 0x6C
		::System::Boolean ExcelResolved; // 0x6D
		::System::Byte _padding0[0x2];
		::Il2CppArray<::System::UInt32>* NeedOptionIDList; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
