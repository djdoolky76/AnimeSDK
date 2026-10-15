#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DevTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_DEVTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FE130)
#define RPG_GAMECORE_DEVTALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FDFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DevTalkInfo_TypeDefinitionIndex = 21134;

	class DevTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TalkSentenceNameString; // 0x10
		::System::String* TalkSentenceString; // 0x18
		::System::Single ProtectTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DevTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DevTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVTALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
