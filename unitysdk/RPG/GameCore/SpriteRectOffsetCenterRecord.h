#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpritePresetRecord.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpriteRectOffsetCenterRecord; }

#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01E50)
#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB01E60)
#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02130)

namespace RPG::GameCore
{
	class SpriteRectOffsetCenterRecord : public ::RPG::GameCore::SpritePresetRecord
	{
	public:
		::System::Single AnchoredPosX; // 0x10
		::System::Single AnchoredPosY; // 0x14
		::System::Single SizeDeltaX; // 0x18
		::System::Single SizeDeltaY; // 0x1C
		::System::Single RotationZ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpriteRectOffsetCenterRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpriteRectOffsetCenterRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpriteRectOffsetCenterRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpriteRectOffsetCenterRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
