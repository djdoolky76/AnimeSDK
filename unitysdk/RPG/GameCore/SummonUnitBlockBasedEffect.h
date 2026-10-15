#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class SummonUnitBlockBasedEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3ADF0)
#define RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3AA20)

namespace RPG::GameCore
{
	class SummonUnitBlockBasedEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 UnitSize; // 0x10
		::System::Single SoftRadius; // 0x1C
		::System::Single VerticalVisibleRange; // 0x20
		::System::Single RootBlockRadius; // 0x24
		::System::String* RootBlockEffect; // 0x28
		::System::Single VisibleRadius; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* EffectPool; // 0x38
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x40
		::System::Single EfxPosJitterFactor; // 0x48
		::System::Single EfxRotJitterFactor; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitBlockBasedEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitBlockBasedEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
