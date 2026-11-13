#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassAdvertisementRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3169E0)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C3162D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassAdvertisementRow_TypeDefinitionIndex = 12949;

	class BattlePassAdvertisementRow : public ::System::Object
	{
	public:
		::System::String* IconBundlePath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePassAdvertisementRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePassAdvertisementRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
