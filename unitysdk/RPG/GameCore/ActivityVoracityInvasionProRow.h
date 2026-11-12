#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityVoracityInvasionProRow; }

#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5947D0)
#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E594610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVoracityInvasionProRow_TypeDefinitionIndex = 12609;

	class ActivityVoracityInvasionProRow : public ::System::Object
	{
	public:
		::System::Single ActivityProgress; // 0x10
		::System::UInt32 RedPoint; // 0x14
		::RPG::Client::TextID ProgressDes; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityVoracityInvasionProRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityVoracityInvasionProRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
