#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSPSilverWolfChooseConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSPSILVERWOLFCHOOSECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F790)
#define RPG_GAMECORE_GRIDFIGHTSPSILVERWOLFCHOOSECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5F5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSPSilverWolfChooseConfigRow_TypeDefinitionIndex = 13672;

	class GridFightSPSilverWolfChooseConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EquipID; // 0x10
		::System::UInt32 Star; // 0x14
		::RPG::Client::TextID SimpleDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPSILVERWOLFCHOOSECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPSILVERWOLFCHOOSECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
