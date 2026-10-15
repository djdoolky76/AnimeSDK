#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyPackAnchorsConfig; }
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E9E00)
#define RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E9C30)

namespace RPG::GameCore
{
	class AlleyPackGoodItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyPackAnchorsConfig* TopAnchors; // 0x10
		::RPG::GameCore::AlleyPackAnchorsConfig* BottomAnchors; // 0x18
		::RPG::GameCore::AlleyPackGoodsTypeEnum GoodsType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x28
		::System::String* BottomAnchorPicPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyPackGoodItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyPackGoodItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
