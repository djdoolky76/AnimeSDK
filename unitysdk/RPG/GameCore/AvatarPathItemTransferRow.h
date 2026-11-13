#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPathItemTransferRow; }

#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DF060)
#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2DEDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathItemTransferRow_TypeDefinitionIndex = 12873;

	class AvatarPathItemTransferRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DialogTitle; // 0x10
		::System::UInt32 TargetItemID; // 0x20
		::System::UInt32 SourceItemID; // 0x24
		::System::UInt32 AvatarID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DialogDesc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarPathItemTransferRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarPathItemTransferRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
