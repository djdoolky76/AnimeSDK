#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D90E0)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D8EB0)

namespace RPG::GameCore
{
	class FiveDimSetBillboardInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 MapIconID; // 0x20
		::System::Boolean IsOverrideShowDistance; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single OverrideShowDistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
