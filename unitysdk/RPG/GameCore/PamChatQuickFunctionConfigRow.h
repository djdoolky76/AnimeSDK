#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }

#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EC2A0)
#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EC090)

namespace RPG::GameCore
{
	class PamChatQuickFunctionConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PlayerInputText; // 0x10
		::RPG::Client::TextID BtnName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamChatQuickFunctionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
