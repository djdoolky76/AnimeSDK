#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesAssistantMessageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAssistantMessageRow; }

#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB39AB0)
#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB39730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAssistantMessageRow_TypeDefinitionIndex = 12329;

	class PlanetFesAssistantMessageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypePara; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Interval; // 0x1C
		::RPG::Client::TextID Description; // 0x20
		::System::UInt32 Priority; // 0x30
		::System::Boolean IsUseGLobalCD; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockPlanetFesLevel; // 0x38
		::RPG::GameCore::PlanetFesAssistantMessageType AssistantMessageType; // 0x3C
		::System::UInt32 Delay; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAssistantMessageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAssistantMessageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
