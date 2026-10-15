#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEFFECTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BAC70)
#define RPG_GAMECORE_FIVEDIMEFFECTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEffectItem_TypeDefinitionIndex = 16663;

	class FiveDimEffectItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEffectItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEffectItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
