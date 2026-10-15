#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerLayerRow; }

#define RPG_GAMECORE_DRINKMAKERLAYERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D620E90)
#define RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D620D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerLayerRow_TypeDefinitionIndex = 13168;

	class DrinkMakerLayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::UInt32 LayerID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerLayerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerLayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
