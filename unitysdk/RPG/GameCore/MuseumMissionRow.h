#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumMissionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumMissionRow; }

#define RPG_GAMECORE_MUSEUMMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D899270)
#define RPG_GAMECORE_MUSEUMMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8990E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumMissionRow_TypeDefinitionIndex = 14243;

	class MuseumMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParameter; // 0x10
		::System::UInt32 MuseumMissionID; // 0x18
		::RPG::GameCore::MuseumMissionType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
