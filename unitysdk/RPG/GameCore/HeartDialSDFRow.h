#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialSDFRow; }

#define RPG_GAMECORE_HEARTDIALSDFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A200)
#define RPG_GAMECORE_HEARTDIALSDFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA79F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialSDFRow_TypeDefinitionIndex = 13887;

	class HeartDialSDFRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::Boolean IsKaomoji; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 VoiceID; // 0x1C
		::RPG::Client::TextID SDFText; // 0x20
		::System::UInt32 ID; // 0x30
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
