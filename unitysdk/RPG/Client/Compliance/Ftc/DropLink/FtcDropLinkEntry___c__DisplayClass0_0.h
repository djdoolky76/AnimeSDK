#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C988D50)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C988E80)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkEntry___c__DisplayClass0_0_TypeDefinitionIndex = 76987;

	class FtcDropLinkEntry___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::TextID name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKENTRY___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this);
		}

	};
}
