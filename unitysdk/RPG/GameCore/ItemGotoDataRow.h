#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemGotoDataRow; }

#define RPG_GAMECORE_ITEMGOTODATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76BEA0)
#define RPG_GAMECORE_ITEMGOTODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D76B8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemGotoDataRow_TypeDefinitionIndex = 13869;

	class ItemGotoDataRow : public ::System::Object
	{
	public:
		::System::UInt32 GotoID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemGotoDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemGotoDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
