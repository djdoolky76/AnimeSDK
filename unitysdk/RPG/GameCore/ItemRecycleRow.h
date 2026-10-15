#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemRecycleRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMRECYCLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79C8D0)
#define RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79C1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRecycleRow_TypeDefinitionIndex = 13892;

	class ItemRecycleRow : public ::System::Object
	{
	public:
		::System::String* RecycleTime; // 0x10
		::System::Boolean ShowTimeType; // 0x18
		::System::Boolean IsShowTime; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ItemRecycleShowType ShowType; // 0x1C
		::System::UInt32 ItemID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Tips; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemRecycleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemRecycleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
