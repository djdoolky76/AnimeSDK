#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/ToastType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ToastPage; }

#define RPG_GAMECORE_TOASTPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8B7C0)
#define RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DB8B7D0)
#define RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8B790)

namespace RPG::GameCore
{
	class ToastPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ToastType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MessageOne; // 0x20
		::RPG::GameCore::DynamicString* MessageOne_DS; // 0x30
		::RPG::Client::TextID MessageTwo; // 0x38
		::RPG::GameCore::DynamicString* MessageTwo_DS; // 0x48
		::System::Boolean CanInterrupt; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
