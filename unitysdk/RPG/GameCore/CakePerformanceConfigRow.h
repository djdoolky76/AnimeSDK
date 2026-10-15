#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakePerformanceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D547000)
#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D546D90)

namespace RPG::GameCore
{
	class CakePerformanceConfigRow : public ::System::Object
	{
	public:
		::System::String* MoviePicPath; // 0x10
		::Il2CppArray<::System::UInt32>* ActorsList; // 0x18
		::RPG::Client::TextID PerformanceName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 PerformanceID; // 0x34
		::System::UInt32 QuestID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakePerformanceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakePerformanceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
