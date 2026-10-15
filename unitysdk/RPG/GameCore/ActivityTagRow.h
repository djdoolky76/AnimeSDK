#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTagRow; }

#define RPG_GAMECORE_ACTIVITYTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D353A00)
#define RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3538A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTagRow_TypeDefinitionIndex = 11215;

	class ActivityTagRow : public ::System::Object
	{
	public:
		::System::UInt32 TagID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
