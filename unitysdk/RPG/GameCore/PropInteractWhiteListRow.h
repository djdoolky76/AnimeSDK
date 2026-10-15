#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropInteractWhiteListRow; }

#define RPG_GAMECORE_PROPINTERACTWHITELISTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D920FA0)
#define RPG_GAMECORE_PROPINTERACTWHITELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D920F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractWhiteListRow_TypeDefinitionIndex = 13234;

	class PropInteractWhiteListRow : public ::System::Object
	{
	public:
		::System::UInt32 PropID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTWHITELISTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInteractWhiteListRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInteractWhiteListRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTWHITELISTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
