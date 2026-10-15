#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaTokenShopConfig; }
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_GACHATYPEBASICINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FDEB0)
#define RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FDC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTypeBasicInfoRow_TypeDefinitionIndex = 13358;

	class GachaTypeBasicInfoRow : public ::System::Object
	{
	public:
		::System::String* GachaBar; // 0x10
		::RPG::GameCore::GachaTokenShopConfig* BuyPos; // 0x18
		::System::UInt32 ItemCosume; // 0x20
		::RPG::GameCore::GachaType GachaTypeID; // 0x24
		::System::UInt32 DiamondID; // 0x28
		::System::UInt32 ItemPrice; // 0x2C
		::System::UInt32 UpPropability; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaTypeBasicInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
