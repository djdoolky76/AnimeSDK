#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GoodsClass; }

#define RPG_GAMECORE_GOODSCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2FE0)
#define RPG_GAMECORE_GOODSCLASS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F2EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoodsClass_TypeDefinitionIndex = 12620;

	class GoodsClass : public ::System::Object
	{
	public:
		::System::UInt32 GoodsCnt; // 0x10
		::System::UInt32 GoodsID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOODSCLASS_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GoodsClass* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GoodsClass*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOODSCLASS_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
