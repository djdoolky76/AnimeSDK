#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KDPAOPIMCBB;
namespace RPG::GameCore { class ItemAutoTransferRow; }

#define RPG_GAMECORE_ITEMAUTOTRANSFERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7609F0)
#define RPG_GAMECORE_ITEMAUTOTRANSFERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7608A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemAutoTransferRow_TypeDefinitionIndex = 13897;

	class ItemAutoTransferRow : public ::System::Object
	{
	public:
		::Il2CppArray<::KDPAOPIMCBB*>* TransferList; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMAUTOTRANSFERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemAutoTransferRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemAutoTransferRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMAUTOTRANSFERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
