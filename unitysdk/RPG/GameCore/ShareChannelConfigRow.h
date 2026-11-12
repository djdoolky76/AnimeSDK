#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShareChannelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SHARECHANNELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE1DC0)
#define RPG_GAMECORE_SHARECHANNELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ECE1560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareChannelConfigRow_TypeDefinitionIndex = 14648;

	class ShareChannelConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Content; // 0x18
		::Il2CppArray<::System::String*>* DisplayLanguageList; // 0x20
		::System::String* Title; // 0x28
		::Il2CppArray<::System::String*>* Topics; // 0x30
		::System::String* Forum; // 0x38
		::System::String* UrlTitle; // 0x40
		::System::String* Platform; // 0x48
		::System::Boolean ShareByNative; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 ShareChannelID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShareChannelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShareChannelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
