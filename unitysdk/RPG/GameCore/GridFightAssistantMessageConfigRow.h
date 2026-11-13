#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAssistantType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FB410)
#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FB090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAssistantMessageConfigRow_TypeDefinitionIndex = 13509;

	class GridFightAssistantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TypePara; // 0x10
		::System::Int32 Priority; // 0x18
		::System::Int32 Interval; // 0x1C
		::System::UInt32 EndDivisionID; // 0x20
		::RPG::GameCore::GridFightAssistantType AssistantMessageType; // 0x24
		::RPG::Client::TextID Description; // 0x28
		::System::Int32 ExclusiveID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAssistantMessageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
