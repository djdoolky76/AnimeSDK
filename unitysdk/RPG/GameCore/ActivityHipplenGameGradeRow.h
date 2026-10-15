#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGameGradeRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D339680)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D339500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameGradeRow_TypeDefinitionIndex = 11645;

	class ActivityHipplenGameGradeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GradeText; // 0x10
		::RPG::GameCore::HipplenGameGradeType GradeType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenGameGradeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenGameGradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
