#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GridFightShowTraitEffect; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D742C30)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D742C40)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D742C00)

namespace RPG::GameCore
{
	class GridFightShowTraitEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TraitSearchKey; // 0x18
		::RPG::GameCore::DynamicFloat* CurValue; // 0x20
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x28
		::RPG::GameCore::GridFightTraitEffectChargeType ChargeType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChangeHint; // 0x38
		::RPG::GameCore::GridFightTraitEffectChangeHintType ChangeHintType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowTraitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowTraitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowTraitEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowTraitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
