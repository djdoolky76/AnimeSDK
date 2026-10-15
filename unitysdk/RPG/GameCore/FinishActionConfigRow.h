#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishActionConfigRow; }

#define RPG_GAMECORE_FINISHACTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67B710)
#define RPG_GAMECORE_FINISHACTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D67B5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishActionConfigRow_TypeDefinitionIndex = 14168;

	class FinishActionConfigRow : public ::System::Object
	{
	public:
		::System::Boolean NeedVerseParam; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FinishActionType FinishActionType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishActionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishActionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
