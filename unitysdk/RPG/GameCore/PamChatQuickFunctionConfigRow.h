#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }

#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BE8E0)
#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8BE6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatQuickFunctionConfigRow_TypeDefinitionIndex = 14312;

	class PamChatQuickFunctionConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BtnName; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PlayerInputText; // 0x28
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
