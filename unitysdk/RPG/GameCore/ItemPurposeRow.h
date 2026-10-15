#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemPurposeRow; }

#define RPG_GAMECORE_ITEMPURPOSEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76CF40)
#define RPG_GAMECORE_ITEMPURPOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D76C900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemPurposeRow_TypeDefinitionIndex = 13875;

	class ItemPurposeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PurposeText; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemPurposeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemPurposeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
