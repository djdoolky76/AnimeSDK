#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightElationGoodsType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationGoodsConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTELATIONGOODSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20602E10)
#define RPG_GAMECORE_GRIDFIGHTELATIONGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20602BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationGoodsConfigRow_TypeDefinitionIndex = 13853;

	class GridFightElationGoodsConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID ElationGoodDesc; // 0x18
		::RPG::GameCore::GridFightElationGoodsType Type; // 0x28
		::System::UInt32 UpgradeMark; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONGOODSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightElationGoodsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightElationGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
