#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyGoodsRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYGOODSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E47F0)
#define RPG_GAMECORE_ALLEYGOODSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E4120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGoodsRow_TypeDefinitionIndex = 12618;

	class AlleyGoodsRow : public ::System::Object
	{
	public:
		::System::String* GoodsConfig; // 0x10
		::System::String* RotateAudioEvent; // 0x18
		::System::String* GoodsPicLocked; // 0x20
		::System::String* GoodsPic; // 0x28
		::System::String* SettleAudioEvent; // 0x30
		::System::UInt32 GoodsProfit; // 0x38
		::System::UInt32 GoodsID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyGoodsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyGoodsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
