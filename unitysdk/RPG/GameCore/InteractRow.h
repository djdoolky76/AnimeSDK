#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InteractCostType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InteractRow; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_INTERACTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE95530)
#define RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE94DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractRow_TypeDefinitionIndex = 14719;

	class InteractRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ItemCostList; // 0x10
		::RPG::GameCore::PropState TargetState; // 0x18
		::RPG::GameCore::InteractCostType InteractCostType; // 0x1C
		::System::UInt32 InteractID; // 0x20
		::System::Boolean IsEvent; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropState SrcState; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID InteractDesc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InteractRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
