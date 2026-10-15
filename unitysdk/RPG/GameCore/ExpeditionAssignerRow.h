#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionAssignerRow; }

#define RPG_GAMECORE_EXPEDITIONASSIGNERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D660720)
#define RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6600E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionAssignerRow_TypeDefinitionIndex = 13265;

	class ExpeditionAssignerRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AssignerName; // 0x10
		::System::UInt32 AssignerID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionAssignerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionAssignerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
