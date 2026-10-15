#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusChallengeGroupRow; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75B200)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75ABA0)

namespace RPG::GameCore
{
	class HeliobusChallengeGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChallengeStageList; // 0x10
		::System::UInt32 ChallengeGroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChallengeGroupName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusChallengeGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusChallengeGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
