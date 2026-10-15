#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA6C0)
#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BA2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardActionRow_TypeDefinitionIndex = 11176;

	class ClockParkCardActionRow : public ::System::Object
	{
	public:
		::System::String* ForeImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* EffectList; // 0x18
		::System::String* ImgPath; // 0x20
		::System::String* ImgPath1; // 0x28
		::Il2CppArray<::System::UInt32>* DiceList; // 0x30
		::System::String* ImgPath3; // 0x38
		::Il2CppArray<::System::UInt32>* SuccessEffectList; // 0x40
		::System::String* ImgPath2; // 0x48
		::System::UInt32 CardActionID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CardDesc; // 0x58
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
