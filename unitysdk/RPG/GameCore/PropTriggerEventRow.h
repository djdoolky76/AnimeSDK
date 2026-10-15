#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropTriggerEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_PROPTRIGGEREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95B8F0)
#define RPG_GAMECORE_PROPTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D95B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTriggerEventRow_TypeDefinitionIndex = 14566;

	class PropTriggerEventRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* ExitJsonPath; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGEREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTriggerEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTriggerEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGEREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
