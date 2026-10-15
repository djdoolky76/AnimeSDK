#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class String; }

#define RPG_GAMECORE_TOASTPILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8BAF0)
#define RPG_GAMECORE_TOASTPILE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DB8BB00)
#define RPG_GAMECORE_TOASTPILE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8BAC0)

namespace RPG::GameCore
{
	class ToastPile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ImgPath; // 0x18
		::RPG::Client::TextID DescTextID; // 0x20
		::RPG::GameCore::DynamicString* DescTextKey; // 0x30
		::System::String* TextIDParam; // 0x38
		::RPG::GameCore::DynamicFloat* TextIDFloatParam; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
