#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClientLogConfigRow; }
namespace RPG::GameCore { class DynamicValue; }

#define RPG_GAMECORE_CLIENTLOGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F500B80)
#define RPG_GAMECORE_CLIENTLOGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5009A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClientLogConfigRow_TypeDefinitionIndex = 13305;

	class ClientLogConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Params; // 0x10
		::System::UInt32 Actionid; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean IsWhiteMode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTLOGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClientLogConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClientLogConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTLOGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
