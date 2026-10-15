#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntranceShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class FuncUnlockConfigRow; }

#define RPG_GAMECORE_FUNCUNLOCKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F8360)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F7680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockConfigRow_TypeDefinitionIndex = 13317;

	class FuncUnlockConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::Il2CppArray<::RPG::GameCore::EntranceShowType>* ShowCondition; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FuncUnlockConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FuncUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
