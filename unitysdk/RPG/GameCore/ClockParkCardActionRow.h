#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA510)
#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7CA140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardActionRow_TypeDefinitionIndex = 11192;

	class ClockParkCardActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DiceList; // 0x10
		::System::String* ImgPath1; // 0x18
		::Il2CppArray<::System::UInt32>* SuccessEffectList; // 0x20
		::Il2CppArray<::System::UInt32>* EffectList; // 0x28
		::System::String* ImgPath; // 0x30
		::System::String* ImgPath3; // 0x38
		::System::String* ImgPath2; // 0x40
		::System::String* ForeImgPath; // 0x48
		::RPG::Client::TextID CardDesc; // 0x50
		::System::UInt32 CardActionID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkCardActionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkCardActionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
