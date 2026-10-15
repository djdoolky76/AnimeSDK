#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GiftDanmuContentRow; }

#define RPG_GAMECORE_GIFTDANMUCONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F0960)
#define RPG_GAMECORE_GIFTDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F0760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GiftDanmuContentRow_TypeDefinitionIndex = 15192;

	class GiftDanmuContentRow : public ::System::Object
	{
	public:
		::System::UInt32 Rarity; // 0x10
		::System::UInt32 SenderID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Content; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUCONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GiftDanmuContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GiftDanmuContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
