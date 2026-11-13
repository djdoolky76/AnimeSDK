#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PSTrophyRow; }

#define RPG_GAMECORE_PSTROPHYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13E960)
#define RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F13E750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PSTrophyRow_TypeDefinitionIndex = 13153;

	class PSTrophyRow : public ::System::Object
	{
	public:
		::System::UInt32 AchievementID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AchievementTitle; // 0x18
		::RPG::Client::TextID AchievementDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PSTrophyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PSTrophyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
