#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicLayerEffectRow; }

#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D4B00)
#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D4890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerEffectRow_TypeDefinitionIndex = 14858;

	class RogueMagicLayerEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::RPG::Client::TextID LayerEffectName; // 0x18
		::RPG::Client::TextID LayerEffectDesc; // 0x28
		::System::UInt32 LayerEffectID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicLayerEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicLayerEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
