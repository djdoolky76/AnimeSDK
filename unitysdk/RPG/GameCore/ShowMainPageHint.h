#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMainPageHint; }

#define RPG_GAMECORE_SHOWMAINPAGEHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1230)
#define RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DAE1240)
#define RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE1200)

namespace RPG::GameCore
{
	class ShowMainPageHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextContent; // 0x18
		::System::Boolean Visible; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMainPageHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMainPageHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMainPageHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMainPageHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
