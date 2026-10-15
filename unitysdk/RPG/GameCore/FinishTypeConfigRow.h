#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishTypeConfigRow; }

#define RPG_GAMECORE_FINISHTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9F90)
#define RPG_GAMECORE_FINISHTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6A9E30)

namespace RPG::GameCore
{
	class FinishTypeConfigRow : public ::System::Object
	{
	public:
		::System::Boolean NeedVerseParam; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::QuestFinishType FinishType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
