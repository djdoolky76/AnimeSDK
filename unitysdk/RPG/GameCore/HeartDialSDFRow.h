#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialSDFRow; }

#define RPG_GAMECORE_HEARTDIALSDFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D758B10)
#define RPG_GAMECORE_HEARTDIALSDFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7588B0)

namespace RPG::GameCore
{
	class HeartDialSDFRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 VoiceID; // 0x1C
		::System::Boolean IsKaomoji; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID SDFText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSDFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialSDFRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialSDFRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSDFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
