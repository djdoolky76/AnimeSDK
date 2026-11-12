#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirNodeTypeConfigRow; }

#define RPG_GAMECORE_PIXAIRNODETYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB35FD0)
#define RPG_GAMECORE_PIXAIRNODETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB35E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirNodeTypeConfigRow_TypeDefinitionIndex = 12190;

	class PixAirNodeTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID NodeName; // 0x10
		::RPG::GameCore::PixAirNodeType NodeType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODETYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirNodeTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirNodeTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODETYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
