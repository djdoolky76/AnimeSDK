#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesAssistantMessageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAssistantMessageRow; }

#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE61760)
#define RPG_GAMECORE_PLANETFESASSISTANTMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE613E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAssistantMessageRow_TypeDefinitionIndex = 12329;

	class PlanetFesAssistantMessageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypePara; // 0x10
		::RPG::GameCore::PlanetFesAssistantMessageType AssistantMessageType; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::Boolean IsUseGLobalCD; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x24
		::System::UInt32 UnlockPlanetFesLevel; // 0x28
		::System::UInt32 Delay; // 0x2C
		::System::UInt32 Interval; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Description; // 0x38
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
