#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirNodeRow; }

#define RPG_GAMECORE_PIXAIRNODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91CD30)
#define RPG_GAMECORE_PIXAIRNODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91CC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirNodeRow_TypeDefinitionIndex = 12131;

	class PixAirNodeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirNodeType NodeType; // 0x10
		::System::UInt32 NodeID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirNodeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirNodeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
