#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingActionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingActionRow; }

#define RPG_GAMECORE_CHENLINGACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5506D0)
#define RPG_GAMECORE_CHENLINGACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D550590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingActionRow_TypeDefinitionIndex = 11091;

	class ChenLingActionRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingActionType ActionType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingActionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingActionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
