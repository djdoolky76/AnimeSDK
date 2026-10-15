#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirTagDisplayRow; }

#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F08E0)
#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F06E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirTagDisplayRow_TypeDefinitionIndex = 12167;

	class PixAirTagDisplayRow : public ::System::Object
	{
	public:
		::System::Boolean IsEquipDisplayTag; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PixAirEquipTag TagType; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTAGDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirTagDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirTagDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTAGDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
